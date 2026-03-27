double __usercall sub_661080@<st0>(Actor *a1@<ecx>, double result@<st0>)
{
  double v3; // st6
  double v4; // [esp+10h] [ebp-8h]

  if ( !g_GodMode )
  {
    v3 = ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 0xB);
    v4 = result;
    result = Actor_GetBaseEncumberance((int)a1, result);
    if ( v3 < v4 && !sub_5E1030(a1) )
      GameUI_QueueMessage((const char *)dword_B38A48, 0, 1u, *(float *)&dword_A46C30);
  }
  return result;
}
