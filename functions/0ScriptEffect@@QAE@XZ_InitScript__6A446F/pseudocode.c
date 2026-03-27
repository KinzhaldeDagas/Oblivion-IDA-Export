// positive sp value has been detected, the output may be wrong!
int __userpurge ScriptEffect::ScriptEffect@<eax>(UInt32 **a1@<ecx>, int a2@<esi>, int a3, int a4, int a5)
{
  *(_DWORD *)(a2 + 0x38) = EffectItem_GetScript(a1);
  *(_DWORD *)(a2 + 0x3C) = 0;
  return a2;
}
