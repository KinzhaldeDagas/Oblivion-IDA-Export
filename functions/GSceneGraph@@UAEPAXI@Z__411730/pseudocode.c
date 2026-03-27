SceneGraph *__thiscall SceneGraph::`scalar deleting destructor'(SceneGraph *this, char a2)
{
  SceneGraph::~SceneGraph(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
