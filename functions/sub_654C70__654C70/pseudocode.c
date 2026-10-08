double __userpurge sub_654C70@<st0>(#239 *a1@<ecx>, double a2@<st1>, Actor *a3)
{
  void *niNode; // edi
  double result; // st7
  UInt32 v7; // eax

  if ( *((_BYTE *)a1 + 0x11C) ) /*0x654c73*/
  {
    sub_5E0A60(a3); /*0x654c83*/
    if ( a2 >= *(float *)&SrcStr && !a3->vtbl->super.super.HasFatigue((TESObjectREFR *)a3) ) /*0x654c9f*/
    {
      niNode = a3->members.super.super.niNode; /*0x654ca6*/
      sub_8A5580((int)niNode, 0); /*0x654cac*/
      result = 1.0; /*0x654cb1*/
      sub_8AB8A0((int)niNode, 1.0); /*0x654cba*/
      sub_424870(&a3->members.super.super.baseExtraList, 0); /*0x654cc7*/
      v7 = sub_5E12B0(a3); /*0x654cce*/
      if ( v7 ) /*0x654cd6*/
        (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v7 + 0x9C))(v7, 0, 0); /*0x654ce6*/
      *((_BYTE *)a1 + 0x11C) = 0; /*0x654ce8*/
    }
  }
  return result; /*0x654cf0*/
}
