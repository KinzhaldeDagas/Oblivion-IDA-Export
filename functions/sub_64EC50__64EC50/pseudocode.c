// 3DTheft decode 2026-05-16: Follow procedure execution reads its target ref from procedure state +0x2C/+0xB and drives movement toward that target's cell/worldspace; no plugin-owned actor/package memory is dereferenced at the later 0x0040DECF crash site.
char __userpurge sub_64EC50@<al>(
        TESObjectREFR **this@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st2>,
        double a5@<st7>,
        double a6@<st3>,
        Actor *a7,
        int a8,
        char a9)
{
  int v12; // eax
  int v13; // eax
  TESPackage *v14; // ebx
  float y; // ecx
  char v16; // al
  int v17; // ecx
  double v19; // st7
  TESObjectREFR *v20; // eax
  int v21; // ebx
  int v22; // ebp
  UInt32 DwordAtOffset40; // eax
  int v24; // eax
  TESWorldSpace *WorldSpace; // [esp+4h] [ebp-1Ch]
  float v26; // [esp+8h] [ebp-18h]
  float v27; // [esp+Ch] [ebp-14h]
  TESPackage *v28; // [esp+24h] [ebp+4h]
  int v29; // [esp+2Ch] [ebp+Ch]

  if ( !*(this + 0xB) ) /*0x64ec53*/
    ((void (__thiscall *)(TESObjectREFR **, Actor *))LODWORD((*this)[0xF].member.pos[1]))(this, a7); /*0x64ec67*/
  v12 = (int)*(this + 0xB); /*0x64ec69*/
  if ( !v12 || (*(_DWORD *)(v12 + 8) & 0x20) != 0 ) /*0x64ec7c*/
  {
    if ( !a9 ) /*0x64ee00*/
      return 0; /*0x64ed74*/
    ((void (__thiscall *)(TESObjectREFR **, Actor *, int))LODWORD((*this)[4].member.rot.z))(this, a7, 1); /*0x64ee13*/
    return 0; /*0x64ee16*/
  }
  else
  {
    v13 = ((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>))LODWORD((*this)[4].member.rot.y))( /*0x64ec8d*/
            this,
            a3,
            a2,
            a4,
            a6);
    v14 = (TESPackage *)v13; /*0x64ec8f*/
    v28 = (TESPackage *)v13; /*0x64ec93*/
    if ( v13 && (*(_BYTE *)(v13 + 0x1E) & 1) != 0 ) /*0x64ec9d*/
    {
      if ( sub_663A60((int)a7) || sub_663A00() >= (int)stru_B36A80.value ) /*0x64ecc4*/
        return 0; /*0x64ecc4*/
      sub_5668E0(v14, 0); /*0x64ecce*/
    }
    if ( !a7->vtbl->IsInCombat(a7, 1) ) /*0x64ecdf*/
    {
      if ( !*(this + 0xB) /*0x64ed1a*/
        || (y = (*(this + 2))->member.rot.y, y != 0.0)
        && sub_569740((char *)LODWORD(y)) < 2
        && (a3 = sub_566DC0(
                   (TESPackage *)*(this + 2),
                   a3,
                   kTerrainLODQuadRayDirectionZ,
                   a4,
                   a7,
                   0,
                   kTerrainLODQuadRayDirectionZ),
            v16) )
      {
        if ( a9 ) /*0x64ed21*/
          ((void (__thiscall *)(TESObjectREFR **, Actor *, int))LODWORD((*this)[4].member.rot.z))(this, a7, 1); /*0x64ed30*/
        if ( TESPackage_IsRuntimePackage((TESPackage *)*(this + 2)) ) /*0x64ed35*/
        {
          v17 = (int)*(this + 2); /*0x64ed3e*/
          if ( v17 ) /*0x64ed43*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x10))(v17, 1); /*0x64ed4c*/
          *(this + 2) = 0; /*0x64ed4e*/
          ((void (__usercall *)(Actor *@<ecx>, int, double@<st0>))a7->vtbl->super.super.super.ClearModified)( /*0x64ed61*/
            a7,
            0x30000,
            a3);
          ((void (__thiscall *)(TESObjectREFR **, Actor *, _DWORD))(*this)->member.childCell.GetChildCell)(this, a7, 0); /*0x64ed6d*/
          return 0; /*0x64ed6d*/
        }
      }
    }
    v19 = sub_5677B0(v14, a3, (TESObjectREFR *)a7, 2); /*0x64ed7c*/
    v29 = Double_To_SInt32(v19); /*0x64ed86*/
    v20 = *(this + 0xB); /*0x64ed8a*/
    if ( !v20 || (double)v29 >= TesObjectREF_GetDistance((TESObjectREFR *)a7, v20, 0) ) /*0x64eda6*/
      return 0; /*0x64eda6*/
    v21 = (int)*(this + 0xB); /*0x64edae*/
    v22 = (int)*this; /*0x64edb2*/
    v27 = kTerrainLODQuadRayDirectionZ; /*0x64edb9*/
    sub_5677B0(v28, v19, (TESObjectREFR *)a7, 1); /*0x64edbf*/
    v26 = a5; /*0x64edc8*/
    WorldSpace = TESObjectREFR_GetWorldSpace(*(this + 0xB)); /*0x64edd3*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(*(this + 0xB)); /*0x64edd4*/
    v24 = (*(int (__thiscall **)(int, UInt32, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v21 + 0x174))( /*0x64ede4*/
            v21,
            DwordAtOffset40,
            WorldSpace,
            LODWORD(v26),
            LODWORD(v27));
    (*(void (__thiscall **)(TESObjectREFR **, Actor *, int))(v22 + 0x418))(this, a7, v24); /*0x64edf0*/
    return 0; /*0x64edf5*/
  }
}
