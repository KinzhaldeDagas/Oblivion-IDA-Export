// ScriptEffect ctor tail: store EffectItem_GetScript(effectItem) at +0x38 and clear per-instance ScriptEventList at +0x3C.
// positive sp value has been detected, the output may be wrong!
int __userpurge ScriptEffect::ScriptEffect@<eax>(UInt32 **a1@<ecx>, int a2@<esi>, int a3, int a4, int a5)
{
  int v5; // eax

  EffectItem_GetScript(a1); /*0x6a446f*/
  *(_DWORD *)(a2 + 0x38) = v5; /*0x6a4474*/
  *(_DWORD *)(a2 + 0x3C) = 0; /*0x6a4477*/
  return a2; /*0x6a4491*/
}
