int __userpurge EffectItem_Initialize_::InitSCIT_School@<eax>(_DWORD *a1@<ebx>, int a2@<esi>, int a3)
{
  _DWORD *v3; // eax

  v3 = *(_DWORD **)(a2 + 0x18); /*0x41483d*/
  if ( v3 != a1 ) /*0x414842*/
  {
    v3[1] = 4; /*0x414844*/
    *(float *)(a2 + 0x20) = -1.0; /*0x41484b*/
  }
  return EffectItem_Initialize_::InitSCIT_ScriptFormID(a1, a2, a3);
}
