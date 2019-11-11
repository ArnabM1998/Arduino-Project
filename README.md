# Arduino-Project
To make a simple way to display the humidity near us. It displays some number that’s indicate the percentage of humidity in air.
We simple use the DHT11lib function to determine the humidity in the air and indexing as per the table:
Humidity Readings Range	& the Seven_Segment_Display_Index as 
20-29%:1
30-39%:2
40-49%:3
50-59%:4
60-69%:5
70-79%:6
80-89%:7
90%:8
Anything Else of Some Fault:0
