int __thiscall sub_58CE30(_DWORD *this, char *a2)
{
  int v3; // eax
  int v4; // esi

  v3 = FormHeapAlloc(0x1Cu);
  v4 = 0;
  if ( v3 )
    v4 = TileTemplateItem_constr(v3, a2, (int)this);
  BSSimpleList_PushBack(this + 1, v4);
  return v4;
}
