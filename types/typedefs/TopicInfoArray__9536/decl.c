struct TopicInfoArray
{
void **_vtbl;
OblivionTopicInfo **data;
unsigned int capacity;
unsigned int firstFreeEntry;
unsigned int numObjs;
unsigned int growSize;
};
