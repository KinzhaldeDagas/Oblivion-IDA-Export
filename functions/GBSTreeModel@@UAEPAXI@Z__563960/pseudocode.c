BSTreeModel *__thiscall BSTreeModel::`scalar deleting destructor'(BSTreeModel *this, char a2)
{
  BSTreeModel::~BSTreeModel(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
