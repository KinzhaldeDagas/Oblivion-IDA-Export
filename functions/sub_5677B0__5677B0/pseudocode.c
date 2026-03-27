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

  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v12 = sub_5EAE10(a3);
      v13 = (_DWORD *)v12;
      if ( v12 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x174))(v12);
        if ( !sub_4D74B0(v13)
          && (*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) != TESDataHandler_g_XMarkerHeading
          && (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) != TESDataHandler_g_XMarker )
        {
          target = this->members.target;
          if ( (!target || !sub_569E60(target).form || !sub_452A60((Atmosphere *)this->members.target))
            && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 0x190))(v13) )
          {
            v15 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v13 + 0x170))(v13, result);
            result = sub_46D5C0(v15);
            v16 = Double_To_SInt32(result);
            v17 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD *))(*v13 + 0x170))(v13) + 4);
            if ( v17 != 0x12 && v17 != 0x17 && v17 != 0x1C )
            {
              a3->vtbl[1].super.Unk_31((TESForm *)a3);
              Double_To_SInt32(result + (double)v16);
              result = sub_5E40C0(a3);
              v28 = result;
              v18 = *(float *)((*(int (__thiscall **)(_DWORD *))(*v13 + 0x174))(v13) + 8);
              if ( v18 < v28
                && *(float *)(((int (__thiscall *)(TESObjectREFR *, char *))a3->vtbl->Unk_57)(a3, v26) + 8) * dbl_A2FAA0 > v28 - v18 )
              {
                ((void (__thiscall *)(TESObjectREFR *, char *))a3->vtbl->Unk_57)(a3, v27);
                Double_To_SInt32(result);
              }
            }
          }
        }
      }
    }
    else if ( a4 == 3 )
    {
      location = this->members.location;
      if ( location )
        Radius = TESPackage_LocationData_GetRadius(location);
      else
        Radius = 0;
      if ( !Radius )
      {
        v7 = this->members.location;
        if ( v7 )
        {
          v8 = (_DWORD *)sub_5697E0(v7);
          v9 = v8;
          if ( v8 )
          {
            if ( !sub_4D74B0(v8) )
            {
              v10 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v9 + 0x170))(v9, result);
              result = sub_46D5C0(v10);
              Double_To_SInt32(result);
            }
          }
        }
      }
    }
    return result;
  }
  v19 = this->members.location;
  if ( v19 )
    v20 = TESPackage_LocationData_GetRadius(v19);
  else
    v20 = 0;
  if ( !v20 )
  {
    v21 = this->members.location;
    if ( v21 )
    {
      v22 = (_DWORD *)sub_5697E0(v21);
      if ( !v22 )
      {
        sub_569740((char *)this->members.location);
        return result;
      }
      if ( v22 != (_DWORD *)((int (__thiscall *)(TESObjectREFR *))a3->vtbl[2].super.Unk_0C)(a3) && !sub_4D74B0(v22) )
      {
        v23 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v22 + 0x190))(v22, result);
        v24 = *v22;
        if ( v23 )
        {
          if ( (*(int (__thiscall **)(_DWORD *))(v24 + 0x18C))(v22) == 9 )
            return result;
          goto LABEL_39;
        }
        if ( (*(int (__thiscall **)(_DWORD *))(v24 + 0x170))(v22) != TESDataHandler_g_XMarkerHeading
          && (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v22 + 0x170))(v22) != TESDataHandler_g_XMarker )
        {
LABEL_39:
          v25 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v22 + 0x170))(v22, result);
          result = sub_46D5C0(v25);
          Double_To_SInt32(result);
          Double_To_SInt32(result);
        }
      }
    }
  }
  return result;
}
