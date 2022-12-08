#include "MedianFilterLib2.h"

int values[] = {1, 2, 1, 1, 2, 8, 10, 1, 1, 1};
size_t valuesLength = sizeof(values) / sizeof(values[0]);
float timeMean = 0;
int median = 0;

int getMeasure()
{
	size_t static index = 0;
	index++;
	return values[index - 1];
}

MedianFilter2<int> medianFilter(5);

void setup()
{
	Serial.begin(115200);

  	for (size_t iCount = 0; iCount < valuesLength; iCount++)
	{
		int rawMeasure = getMeasure();

		unsigned long timeCount = micros();
		int median = medianFilter.AddValue(rawMeasure);
		timeCount = micros() - timeCount;
		timeMean += timeCount;

		Serial.print(rawMeasure);
		Serial.print(",");
		Serial.println(median);
	}

  Serial.print("Median = ");
  Serial.println(median);
	Serial.println(timeMean / valuesLength);

}

void loop()
{


}
