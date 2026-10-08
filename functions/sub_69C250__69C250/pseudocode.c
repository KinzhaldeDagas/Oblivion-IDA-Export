void __userpurge sub_69C250(
        MobileObject *a1@<ecx>,
        int a2@<ebp>,
        float a3@<edi>,
        int a4@<esi>,
        float a5,
        int a6,
        int a7,
        float a8)
{
  MobileObjectVtbl *vtbl; // edi
  float *v10; // eax
  float *v11; // eax
  double v12; // st7
  NiPoint3 *p_pos; // eax
  double v14; // st7
  double v15; // st6
  double y; // st5
  void *niNode; // ecx
  int *v18; // ecx
  int v19; // edi
  char *data; // edi
  char *refID; // ebx
  float *v22; // eax
  __int64 v23; // [esp+28h] [ebp-6Ch]
  __int64 v24; // [esp+30h] [ebp-64h]
  float v25; // [esp+48h] [ebp-4Ch]
  float v27; // [esp+5Ch] [ebp-38h]
  float v28; // [esp+60h] [ebp-34h]
  float x; // [esp+60h] [ebp-34h]
  float v30; // [esp+64h] [ebp-30h]
  float v31; // [esp+68h] [ebp-2Ch]
  float v32; // [esp+68h] [ebp-2Ch]
  float v33; // [esp+68h] [ebp-2Ch]
  float v34; // [esp+6Ch] [ebp-28h]
  float v35; // [esp+70h] [ebp-24h]
  float v36; // [esp+74h] [ebp-20h]
  float v37; // [esp+78h] [ebp-1Ch]
  float v38; // [esp+88h] [ebp-Ch] BYREF
  float v39; // [esp+8Ch] [ebp-8h]
  float v40; // [esp+90h] [ebp-4h]
  float v41; // [esp+98h] [ebp+4h]
  float v42; // [esp+98h] [ebp+4h]
  float v43; // [esp+98h] [ebp+4h]
  float v44; // [esp+98h] [ebp+4h]
  float v45; // [esp+98h] [ebp+4h]
  float v46; // [esp+98h] [ebp+4h]
  float v47; // [esp+98h] [ebp+4h]
  float v48; // [esp+98h] [ebp+4h]

  if ( a5 >= dbl_A2FCC8 ) /*0x69c268*/
    ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x69c274*/
  if ( a5 >= 0.0 ) /*0x69c281*/
  {
    if ( !LODWORD(a1[1].super.pos[0]) ) /*0x69c287*/
    {
      if ( (a1->super.super.flags & 0x20) != 0 ) /*0x69c29c*/
        return; /*0x69c29c*/
      MobileObject_GetCharProxy(a1); /*0x69c2a4*/
      if ( v31 >= (double)*(float *)(((int (__thiscall *)(MobileObject *, _DWORD, int, int))a1->vtbl->super.GetPos)( /*0x69c2e3*/
                                       a1,
                                       LODWORD(a3),
                                       a4,
                                       a2)
                                   + 8) )
      {
        vtbl = a1->vtbl; /*0x69c2e5*/
        v10 = a1->vtbl->super.GetPos(a1); /*0x69c2ef*/
        ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].super.super.super.ClearComponentReferences)( /*0x69c314*/
          a1,
          *(_DWORD *)v10,
          *((_DWORD *)v10 + 1),
          *((_DWORD *)v10 + 2),
          0,
          0,
          1);
      }
      v38 = 0.0; /*0x69c31a*/
      v39 = *(float *)&a1[1].vtbl * a8; /*0x69c32b*/
      v40 = 0.0; /*0x69c331*/
      v32 = 1.0 - a8 * flt_B37ED0[0x10]; /*0x69c33f*/
      *((float *)MobileObject_GetCharProxy(a1) + 0xC9) = v32; /*0x69c34e*/
      a1->vtbl->super.GetPos((TESObjectREFR *)a1); /*0x69c35c*/
      ((void (__thiscall *)(MobileObject *, _DWORD, float *, int))a1->vtbl->Move)(a1, LODWORD(a8), &v38, 0xF); /*0x69c38b*/
      if ( ((unsigned __int8 (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.super.CompareTo)(a1) ) /*0x69c397*/
      {
        v11 = a1->vtbl->super.GetPos(a1); /*0x69c3ab*/
        v30 = *v11; /*0x69c3bf*/
        v33 = v11[1]; /*0x69c3c3*/
        v34 = v11[2]; /*0x69c3c7*/
        v12 = *v11 - v35; /*0x69c3d1*/
        p_pos = &a1->vtbl->super.GetNiNode(a1)->members.super.m_localTransform.pos; /*0x69c3d5*/
        p_pos->x = v30; /*0x69c3d8*/
        p_pos->y = v33; /*0x69c3da*/
        v38 = v12; /*0x69c3dd*/
        p_pos->z = v34; /*0x69c3e9*/
        v39 = v33 - v36; /*0x69c3f0*/
        v40 = v34 - v37; /*0x69c3fc*/
        v27 = NiPoint3_Length(&v38); /*0x69c405*/
        v28 = *(float *)&a1[1].super.super.type + v27; /*0x69c410*/
        *(float *)&a1[1].super.super.type = v28; /*0x69c418*/
        if ( unk_B37E88 < (double)v28 ) /*0x69c428*/
          ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x69c436*/
        if ( v27 / a5 < dbl_A3F3F0 ) /*0x69c44b*/
          ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a1->vtbl[1].super.super.super.ClearComponentReferences)( /*0x69c47c*/
            a1,
            LODWORD(g_zeroNiPoint3.x),
            LODWORD(g_zeroNiPoint3.y),
            LODWORD(g_zeroNiPoint3.z),
            0,
            0,
            0);
      }
    }
    x = a1[1].super.rot.x; /*0x69c481*/
    v14 = a5; /*0x69c490*/
    v41 = x + a5; /*0x69c492*/
    v15 = v41; /*0x69c496*/
    a1[1].super.rot.x = v41; /*0x69c49a*/
    y = a1[1].super.rot.y; /*0x69c49d*/
    if ( y >= v41 ) /*0x69c4aa*/
    {
      niNode = a1[1].super.niNode; /*0x69c4c6*/
      if ( niNode ) /*0x69c4ce*/
      {
        v25 = v14; /*0x69c4d1*/
        MagicCaster_CastingVFX_UpdateTimes_((int)niNode, v25); /*0x69c4d4*/
      }
      v18 = (int *)LODWORD(a1[1].super.pos[2]); /*0x69c4dd*/
      if ( v18 ) /*0x69c4e5*/
      {
        v42 = a1[1].super.rot.y * dbl_A2FAA0; /*0x69c4f3*/
        v15 = v42; /*0x69c4fa*/
        if ( v42 < (double)a1[1].super.rot.x ) /*0x69c507*/
        {
          v15 = 1.0; /*0x69c511*/
          v43 = 1.0 - (a1[1].super.rot.x - v42) / v42; /*0x69c515*/
          sub_6B7280(v18, v43); /*0x69c520*/
        }
      }
      v44 = x / flt_B37ED0[0x12]; /*0x69c536*/
      v45 = floor(v44); /*0x69c546*/
      v19 = Double_To_SInt32(v45); /*0x69c55c*/
      v46 = a1[1].super.rot.x / flt_B37ED0[0x12]; /*0x69c55e*/
      v47 = floor(v46); /*0x69c56e*/
      if ( v19 != Double_To_SInt32(v47) ) /*0x69c580*/
      {
        v48 = (a1[1].super.rot.y - a1[1].super.rot.x) / a1[1].super.rot.y; /*0x69c591*/
        if ( v48 > 0.0 ) /*0x69c5a0*/
        {
          data = (char *)a1[1].super.super.modlist.data; /*0x69c5aa*/
          refID = (char *)a1[1].super.super.refID; /*0x69c5ad*/
          v22 = a1->vtbl->super.GetPos(a1); /*0x69c5b2*/
          *((float *)&v23 + 1) = *v22; /*0x69c5d0*/
          v24 = *(_QWORD *)(v22 + 1); /*0x69c5d8*/
          LODWORD(v23) = Shared_GetDwordAtOffset40(a1); /*0x69c5e5*/
          MagicCaster_TargetEffectHit__(refID, y, v48, v15, data, v23, v24, (int)a1, 0, 0, v48, 1.0); /*0x69c5e9*/
        }
      }
    }
    else
    {
      ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1); /*0x69c4ba*/
    }
  }
}
