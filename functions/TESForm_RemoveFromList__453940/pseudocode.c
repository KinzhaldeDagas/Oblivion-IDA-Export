void __thiscall TESForm_RemoveFromList(TESForm *this, TESFormVtbl *a2)
{
  bool v2; // zf
  TESForm *v3; // ecx
  TESForm *v4; // eax

  v2 = this + 2 == 0;
  v3 = this + 2;
  v4 = v3;
  if ( !v2 )
  {
    while ( v4->vtbl != a2 )
    {
      v4 = *(TESForm **)&v4->member.type;
      if ( !v4 )
        return;
    }
    BSSimpleList_Remove(v3, (int)a2);
  }
}
