struct OblivionInterfaceTimer
{
void *index;
float elapsed;
float duration;
OblivionInterfaceTimer *previous;
OblivionInterfaceTimer *next;
};
