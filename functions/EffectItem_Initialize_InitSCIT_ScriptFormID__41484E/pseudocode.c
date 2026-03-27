int __userpurge EffectItem_Initialize_::InitSCIT_ScriptFormID@<eax>(_DWORD *a1@<ebx>, int a2@<esi>, int a3)
{
  _DWORD *v3; // eax

  v3 = *(_DWORD **)(a2 + 0x18);
  if ( v3 != a1 )
    *v3 = a1;
  return EffectItem_Initialize_::InitSCIT_VFX((int)a1, a2, a3);
}
