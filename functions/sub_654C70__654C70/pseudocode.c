double __userpurge sub_654C70@<st0>(#239 *a1@<ecx>, double a2@<st3>, Actor *a3)
{
  int niNode; // edi
  double result; // st7
  UInt32 v9; // eax

  if ( *((_BYTE *)a1 + 0x11C) )
  {
    sub_5E0A60(a3);
    if ( a2 >= *(float *)&SrcStr && !a3->vtbl->super.super.HasFatigue((TESObjectREFR *)a3) )
    {
      niNode = (int)a3->members.super.super.niNode;
      sub_8A5580(niNode, 0);
      result = 1.0;
      sub_8AB8A0(niNode, 1.0);
      sub_424870(&a3->members.super.super.baseExtraList, 0);
      v9 = sub_5E12B0(a3);
      if ( v9 )
        (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v9 + 0x9C))(v9, 0, 0);
      *((_BYTE *)a1 + 0x11C) = 0;
    }
  }
  return result;
}
