void __usercall sub_5E6E00(Actor *a1@<ecx>, int a2@<edi>, double st6_0@<st1>)
{
  TESPackage *editorPackage; // edi
  TESObjectCELL *ParentCell; // eax
  char v6; // al
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // eax
  float *v9; // [esp+0h] [ebp-20h]
  float *v10; // [esp+0h] [ebp-20h]
  float a3; // [esp+4h] [ebp-1Ch]
  float *a3a; // [esp+4h] [ebp-1Ch]
  float a3b; // [esp+4h] [ebp-1Ch]
  float *v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+8h] [ebp-18h]
  float *v16; // [esp+8h] [ebp-18h]
  float a5; // [esp+Ch] [ebp-14h]
  float *a5a; // [esp+Ch] [ebp-14h]
  float a5b; // [esp+Ch] [ebp-14h]
  unsigned __int8 (__cdecl *v20)(TESObjectREFR *, int); // [esp+10h] [ebp-10h]
  Actor *v21; // [esp+14h] [ebp-Ch]

  if ( a1->members.super.process )
  {
    if ( !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) )
    {
      editorPackage = a1->members.super.process->editorPackage;
      if ( editorPackage )
      {
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1) && !sub_567770((char *)editorPackage) )
        {
          if ( sub_4BF150(editorPackage) )
          {
            v21 = a1;
            v20 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30;
          }
          else
          {
            if ( !sub_565DA0(editorPackage) )
              goto LABEL_11;
            v21 = a1;
            v20 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0;
          }
          a5 = flt_A5B6C0;
          v14 = a1->vtbl->super.super.GetPos(a1);
          a3 = flt_A5B6C0;
          v9 = a1->vtbl->super.super.GetPos(a1);
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
          sub_446B90(ParentCell, v9, a3, v14, a5, v20, (int)v21);
LABEL_11:
          sub_566DC0(editorPackage, flt_A30634, st6_0, a1, 0, flt_A30634);
          if ( v6 )
          {
            if ( !a1->members.super.process->GetUnk084(a1->members.super.process) )
            {
              if ( sub_565DD0(editorPackage) )
              {
                a5a = (float *)((int (__thiscall *)(_DWORD, _DWORD))a1->vtbl->super.super.GetPos)(a1, flt_A5B6C0);
                v15 = flt_A5B6C0;
                a3a = a1->vtbl->super.super.GetPos(a1);
                v7 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
                sub_446B90(
                  v7,
                  a3a,
                  v15,
                  a5a,
                  COERCE_FLOAT(sub_645A30),
                  (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))a1,
                  a2);
                a1->members.super.process->SetUnk084(a1->members.super.process, 1);
              }
              else if ( sub_565DE0(editorPackage) )
              {
                a5b = flt_A5B6C0;
                v16 = a1->vtbl->super.super.GetPos(a1);
                a3b = flt_A5B6C0;
                v10 = a1->vtbl->super.super.GetPos(a1);
                v8 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
                sub_446B90(
                  v8,
                  v10,
                  a3b,
                  v16,
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
}
