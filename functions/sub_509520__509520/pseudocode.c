char __cdecl sub_509520(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  OSGlobals *v8; // eax
  int *sound; // ebx
  int *v10; // esi
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  UInt16 v15[2]; // [esp+18h] [ebp-10h] BYREF
  float v16; // [esp+1Ch] [ebp-Ch]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]

  v8 = MEMORY[0xB33398]; /*0x509523*/
  *(_DWORD *)v15 = 0; /*0x509529*/
  sound = (int *)v8->sound; /*0x509531*/
  if ( sound ) /*0x509536*/
  {
    if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15) ) /*0x509565*/
    {
      v10 = OSGLobals_PlaySound(sound, *(void **)(*(_DWORD *)v15 + 0xC), 0x102, 0); /*0x50958c*/
      if ( v10 ) /*0x509590*/
      {
        if ( a4 ) /*0x509594*/
        {
          v11 = a4->vtbl->GetPos(a4); /*0x5095a0*/
          v12 = *v11; /*0x5095a2*/
          v13 = v11[1]; /*0x5095a4*/
          v18 = v11[2]; /*0x5095ad*/
          v17 = v13; /*0x5095b9*/
          v16 = v12; /*0x5095c1*/
          sub_6B7360(v10, v12, v13, v18); /*0x5095d2*/
          sub_6AC3E0((_DWORD **)sound, *v10, (LONG)a4); /*0x5095dd*/
          sub_6B7190(v10, 0); /*0x5095e6*/
          sub_6B73E0(v10); /*0x5095ed*/
          FormHeapFree((unsigned int)v10); /*0x5095f3*/
        }
      }
    }
  }
  return 1; /*0x5095ff*/
}
