double __usercall sub_5E6E00@<st0>(Actor *a1@<ecx>, int a2@<edi>, double st6_0@<st1>, double result@<st0>)
{
  TESPackage *editorPackage; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  char v7; // al
  int v8; // eax
  TESObjectCELL *v9; // eax
  int v10; // eax
  TESObjectCELL *v11; // eax
  float *v12; // [esp+0h] [ebp-20h]
  float *v13; // [esp+0h] [ebp-20h]
  float a3; // [esp+4h] [ebp-1Ch]
  float *a3a; // [esp+4h] [ebp-1Ch]
  float a3b; // [esp+4h] [ebp-1Ch]
  float *v17; // [esp+8h] [ebp-18h]
  float v18; // [esp+8h] [ebp-18h]
  float *v19; // [esp+8h] [ebp-18h]
  float a5; // [esp+Ch] [ebp-14h]
  float *a5a; // [esp+Ch] [ebp-14h]
  float a5b; // [esp+Ch] [ebp-14h]
  unsigned __int8 (__cdecl *v23)(TESObjectREFR *, int); // [esp+10h] [ebp-10h]
  Actor *v24; // [esp+14h] [ebp-Ch]

  if ( a1->members.super.process ) /*0x5e6e03*/
  {
    if ( !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) ) /*0x5e6e17*/
    {
      editorPackage = a1->members.super.process->editorPackage; /*0x5e6e25*/
      if ( editorPackage ) /*0x5e6e2a*/
      {
        if ( Shared_GetDwordAtOffset40(a1) && !TESPackage::IsTemporaryOverrideType((char *)editorPackage) ) /*0x5e6e41*/
        {
          if ( sub_4BF150(editorPackage) ) /*0x5e6e50*/
          {
            v24 = a1; /*0x5e6e59*/
            v23 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30; /*0x5e6e5a*/
          }
          else
          {
            if ( !sub_565DA0(editorPackage) ) /*0x5e6e6a*/
              goto LABEL_11; /*0x5e6e6a*/
            v24 = a1; /*0x5e6e6c*/
            v23 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0; /*0x5e6e6d*/
          }
          a5 = flt_A5B6C0; /*0x5e6e83*/
          v17 = a1->vtbl->super.super.GetPos(a1); /*0x5e6e90*/
          a3 = flt_A5B6C0; /*0x5e6e9a*/
          v12 = a1->vtbl->super.super.GetPos(a1); /*0x5e6e9f*/
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5e6ea2*/
          sub_446B90(DwordAtOffset40, v12, a3, v17, a5, v23, (int)v24); /*0x5e6eae*/
LABEL_11:
          result = sub_566DC0(editorPackage, kTerrainLODQuadRayDirectionZ, st6_0, a1, 0, kTerrainLODQuadRayDirectionZ); /*0x5e6eb3*/
          if ( v7 ) /*0x5e6ec9*/
          {
            if ( !a1->members.super.process->GetUnk084(a1->members.super.process) ) /*0x5e6eda*/
            {
              if ( sub_565DD0(editorPackage) ) /*0x5e6ee6*/
              {
                v8 = ((int (__thiscall *)(_DWORD, _DWORD))a1->vtbl->super.super.GetPos)(a1, flt_A5B6C0); /*0x5e6f09*/
                result = flt_A5B6C0; /*0x5e6f0b*/
                a5a = (float *)v8; /*0x5e6f13*/
                v18 = flt_A5B6C0; /*0x5e6f1d*/
                a3a = a1->vtbl->super.super.GetPos(a1); /*0x5e6f22*/
                v9 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5e6f25*/
                sub_446B90( /*0x5e6f31*/
                  v9,
                  a3a,
                  v18,
                  a5a,
                  COERCE_FLOAT(sub_645A30),
                  (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))a1,
                  a2);
                a1->members.super.process->SetUnk084(a1->members.super.process, 1); /*0x5e6f43*/
              }
              else if ( sub_565DE0(editorPackage) ) /*0x5e6f4a*/
              {
                a5b = flt_A5B6C0; /*0x5e6f6a*/
                v10 = ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a1->vtbl->super.super.GetPos)(a1, result); /*0x5e6f6d*/
                result = flt_A5B6C0; /*0x5e6f6f*/
                v19 = (float *)v10; /*0x5e6f77*/
                a3b = flt_A5B6C0; /*0x5e6f81*/
                v13 = a1->vtbl->super.super.GetPos(a1); /*0x5e6f86*/
                v11 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5e6f89*/
                sub_446B90( /*0x5e6f95*/
                  v11,
                  v13,
                  a3b,
                  v19,
                  a5b,
                  (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0,
                  (int)a1);
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x5e6f46*/
}
