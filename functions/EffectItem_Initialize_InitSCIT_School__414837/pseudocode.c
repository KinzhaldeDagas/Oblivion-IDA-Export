int __userpurge EffectItem_Initialize_::InitSCIT_School@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a2 + 0x18);
  if ( v3 != a1 )
  {
    *(_DWORD *)(v3 + 4) = 4;
    *(float *)(a2 + 0x20) = -1.0;
  }
  return EffectItem_Initialize_::InitSCIT_ScriptFormID(a1, a2, a3);
}
