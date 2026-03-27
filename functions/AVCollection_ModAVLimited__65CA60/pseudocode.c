int __userpurge AVCollection_ModAVLimited@<eax>(_DWORD *this@<ecx>, int a2, int a3, int a4, float a5, int a6)
{
  _BYTE *Node; // ecx

  Node = AVCollection_GetNode(this, a2);
  if ( Node )
    return AVCollection_ModAVLimited_::ModExistingModifier((int)Node, this, a2, a3, a4, a5, a6);
  else
    return AVCollection_ModAVLimited_::AddNewModifier(a2, a3, a4);
}
