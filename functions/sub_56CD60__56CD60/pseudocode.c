int __thiscall sub_56CD60(NiTimeController *this)
{
  NiNode *v2; // eax
  NiNode *v3; // esi
  int result; // eax

  if ( byte_B3A690 )
  {
    v2 = (NiNode *)sub_56BB90();
    v3 = v2;
    if ( v2 )
    {
      sub_478300(v2, this);
      result = (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)dword_B3F940 + 0x4C))(dword_B3F940, v3, 1);
      if ( (_BYTE)result )
        return result;
      ((void (__thiscall *)(NiNode *))v3->vtbl->super.ApplyTransform)(v3);
    }
  }
  return ((int (__thiscall *)(NiTimeController *))this->vtbl->Start)(this);
}
