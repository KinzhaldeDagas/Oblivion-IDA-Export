double __usercall sub_661080@<st0>(Actor *a1@<ecx>, double result@<st0>)
{
  double v3; // st6
  double v4; // [esp+10h] [ebp-8h]

  if ( !g_godModeEnabled ) /*0x66108d*/
  {
    v3 = ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0xB); /*0x6610a0*/
    v4 = result; /*0x6610a2*/
    result = Actor_GetBaseEncumberance((int)a1, result); /*0x6610a8*/
    if ( v3 < v4 && !sub_5E1030(a1) ) /*0x6610bd*/
      GameUI_QueueMessage(stru_B38A48.value, 0, 1u, *(float *)&dword_A46C30); /*0x6610da*/
  }
  return result; /*0x661091*/
}
