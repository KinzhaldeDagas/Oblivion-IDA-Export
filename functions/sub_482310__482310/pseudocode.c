double __usercall sub_482310@<st0>(int a1@<ecx>, double result@<st0>)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // edi
  TESObjectCELL **v6; // esi
  TESObjectLAND *v7; // eax
  unsigned int i; // [esp+4h] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 0x20) ) /*0x482314*/
  {
    v3 = *(_DWORD *)(a1 + 0xC); /*0x48231a*/
    v4 = 0; /*0x48231e*/
    for ( i = v3; v4 < v3; ++v4 ) /*0x482326*/
    {
      v5 = 0; /*0x482330*/
      do /*0x482366*/
      {
        v6 = (TESObjectCELL **)(*(_DWORD *)(a1 + 0x10) + 8 * (v5 + v4 * *(_DWORD *)(a1 + 0xC))); /*0x48233d*/
        if ( v6 ) /*0x482342*/
        {
          if ( *v6 ) /*0x482344*/
          {
            v7 = sub_4CE3C0(*v6); /*0x48234a*/
            sub_4C5640((int)v7); /*0x482351*/
            sub_4D4D00((ExtraDataList *)*v6); /*0x482358*/
            v3 = i; /*0x48235d*/
          }
        }
        ++v5; /*0x482361*/
      }
      while ( v5 < v3 ); /*0x482366*/
    }
    result = WaterSurfaceLoop(*(float *)&MEMORY[0xB333A0]->waterManager, result); /*0x482379*/
    *(_BYTE *)(a1 + 0x20) = 1; /*0x48237e*/
  }
  return result; /*0x482383*/
}
