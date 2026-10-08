SceneGraph *__thiscall SceneGraph::`scalar deleting destructor'(SceneGraph *this, char a2)
{
  SceneGraph::~SceneGraph(this); /*0x411733*/
  if ( (a2 & 1) != 0 ) /*0x41173d*/
    FormHeapFree((unsigned int)this); /*0x411740*/
  return this; /*0x41174a*/
}
