void __userpurge sub_68AE80(int *a1@<ecx>, double a2@<st1>, double a3@<st0>, TESChildCELL *a4)
{
  TESForm *v8; // ebx
  double GameHour; // st5
  double v10; // st7
  double v11; // st5
  char v12; // bl
  double v13; // st6
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+1Ch] [ebp+4h]
  float v16; // [esp+1Ch] [ebp+4h]

  if ( a4 && IsWeaponReady(a4) ) /*0x68ae95*/
  {
    v8 = TESForm_LookupByFormID(0x3Au); /*0x68aeb2*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x68aeb4*/
    v14 = a3; /*0x68aeb9*/
    v10 = sub_6599B0(a4); /*0x68aec7*/
    if ( a2 > v14 ) /*0x68aed5*/
      v14 = v14 + dbl_A2F920; /*0x68aee1*/
    sub_6599B0(a4); /*0x68aeef*/
    v15 = v14 - GameHour; /*0x68aef8*/
    v11 = *(float *)&v8[1].member.refID; /*0x68aefc*/
    v12 = 1; /*0x68aeff*/
    v16 = dbl_A2F938 / v11 * v15; /*0x68af0b*/
    while ( v16 > 0.0 && v12 ) /*0x68af22*/
    {
      v13 = ((double (__usercall *)@<st0>(int *@<ecx>, TESChildCELL *, _DWORD, double@<st0>))*(_DWORD *)(*a1 + 0x1C))( /*0x68af30*/
              a1,
              a4,
              LODWORD(v16),
              v10);
      v16 = v10; /*0x68af32*/
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a4->vtbl + 0x21))(a4) ) /*0x68af40*/
        goto LABEL_14; /*0x68af40*/
      if ( v16 <= 0.0 || !sub_68ABA0(a1, 0.0, v13, v10, (TESObjectREFR *)a4) ) /*0x68af56*/
        return; /*0x68af5d*/
      if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a4->vtbl + 0x21))(a4) ) /*0x68af69*/
      {
LABEL_14:
        v12 = 0; /*0x68af91*/
      }
      else if ( sub_6899E0(a1) ) /*0x68af71*/
      {
        (*((void (__thiscall **)(TESChildCELL *, int))a4->vtbl + 0x60))(a4, 1); /*0x68af86*/
        return; /*0x68af8e*/
      }
    }
  }
}
