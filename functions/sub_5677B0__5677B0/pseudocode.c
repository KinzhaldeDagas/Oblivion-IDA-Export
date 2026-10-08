double __userpurge sub_5677B0@<st0>(TESPackage *this@<ecx>, double result@<st0>, TESObjectREFR *a3, int a4)
{
  LocationData *location; // ecx
  int Radius; // eax
  LocationData *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  void *v10; // eax
  int v12; // eax
  _DWORD *v13; // esi
  TargetData *target; // ecx
  void *v15; // eax
  int v16; // edi
  int v17; // eax
  double v18; // st5
  LocationData *v19; // ecx
  int v20; // eax
  LocationData *v21; // ecx
  _DWORD *v22; // esi
  char v23; // al
  int v24; // edx
  void *v25; // eax
  char v26[12]; // [esp+18h] [ebp-18h] BYREF
  char v27[12]; // [esp+24h] [ebp-Ch] BYREF
  float v28; // [esp+34h] [ebp+4h]

  if ( a4 != 1 ) /*0x5677c7*/
  {
    if ( a4 == 2 ) /*0x5677d0*/
    {
      v12 = sub_5EAE10(a3); /*0x567862*/
      v13 = (_DWORD *)v12; /*0x567867*/
      if ( v12 ) /*0x56786b*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x174))(v12); /*0x56787b*/
        if ( !sub_4D74B0(v13) /*0x5678b6*/
          && (*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) != MEMORY[0xB35EB0]
          && (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) != MEMORY[0xB35EAC] )
        {
          target = this->members.target; /*0x5678bc*/
          if ( (!target || !sub_569E60(target).form || !Shared_GetPointerAtOffset08((Atmosphere *)this->members.target)) /*0x5678ea*/
            && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 0x190))(v13) )
          {
            v15 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v13 + 0x170))(v13, result); /*0x5678fe*/
            result = sub_46D5C0(v15); /*0x567901*/
            v16 = Double_To_SInt32(result); /*0x567910*/
            v17 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) + 4); /*0x567920*/
            if ( v17 != 0x12 && v17 != 0x17 && v17 != 0x1C ) /*0x567939*/
            {
              a3->vtbl[1].super.Unk_31((TESForm *)a3); /*0x567949*/
              Double_To_SInt32(result + (double)v16); /*0x56794f*/
              result = sub_5E40C0(a3); /*0x56795c*/
              v28 = result; /*0x567961*/
              v18 = *(float *)((*(int (__thiscall **)(_DWORD *))(*v13 + 0x174))(v13) + 8); /*0x56797c*/
              if ( v18 < v28 /*0x5679b2*/
                && *(float *)(((int (__thiscall *)(TESObjectREFR *, char *))a3->vtbl->Unk_57)(a3, v26) + 8) * dbl_A2FAA0 > v28 - v18 )
              {
                ((void (__thiscall *)(TESObjectREFR *, char *))a3->vtbl->Unk_57)(a3, v27); /*0x5679c3*/
                Double_To_SInt32(result); /*0x5679d2*/
              }
            }
          }
        }
      }
    }
    else if ( a4 == 3 ) /*0x5677d9*/
    {
      location = this->members.location; /*0x5677df*/
      if ( location ) /*0x5677e4*/
        Radius = TESPackage_LocationData_GetRadius(location); /*0x5677e6*/
      else
        Radius = 0; /*0x5677ed*/
      if ( !Radius ) /*0x5677f7*/
      {
        v7 = this->members.location; /*0x5677f9*/
        if ( v7 ) /*0x5677fe*/
        {
          v8 = (_DWORD *)sub_5697E0(v7); /*0x567800*/
          v9 = v8; /*0x567805*/
          if ( v8 ) /*0x567809*/
          {
            if ( !sub_4D74B0(v8) ) /*0x56780d*/
            {
              v10 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v9 + 0x170))(v9, result); /*0x567824*/
              result = sub_46D5C0(v10); /*0x567827*/
              Double_To_SInt32(result); /*0x56782f*/
            }
          }
        }
      }
    }
    return result; /*0x56782f*/
  }
  v19 = this->members.location; /*0x567a01*/
  if ( v19 ) /*0x567a06*/
    v20 = TESPackage_LocationData_GetRadius(v19); /*0x567a08*/
  else
    v20 = 0; /*0x567a0f*/
  if ( !v20 ) /*0x567a19*/
  {
    v21 = this->members.location; /*0x567a1f*/
    if ( v21 ) /*0x567a24*/
    {
      v22 = (_DWORD *)sub_5697E0(v21); /*0x567a2f*/
      if ( !v22 ) /*0x567a33*/
      {
        sub_569740((char *)this->members.location); /*0x567b4f*/
        return result; /*0x567b4f*/
      }
      if ( v22 != (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3) && !sub_4D74B0(v22) ) /*0x567a62*/
      {
        v23 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v22 + 0x190))(v22, result); /*0x567a75*/
        v24 = *v22; /*0x567a79*/
        if ( v23 ) /*0x567a7d*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(v24 + 0x18C))(v22) == 9 ) /*0x567a8a*/
            return result; /*0x567a8a*/
          goto LABEL_39; /*0x567a8a*/
        }
        if ( (*(int (__thiscall **)(_DWORD *))(v24 + 0x170))(v22) != MEMORY[0xB35EB0] /*0x567b00*/
          && (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v22 + 0x170))(v22) != MEMORY[0xB35EAC] )
        {
LABEL_39:
          v25 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v22 + 0x170))(v22, result); /*0x567aa1*/
          result = sub_46D5C0(v25); /*0x567aae*/
          Double_To_SInt32(result); /*0x567ab6*/
          Double_To_SInt32(result); /*0x567ac9*/
        }
      }
    }
  }
  return result; /*0x567854*/
}
