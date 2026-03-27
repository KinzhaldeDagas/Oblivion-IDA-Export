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
  int v11; // eax
  double v12; // st7
  int p_pos; // eax
  double v14; // st7
  double v15; // st6
  double y; // st5
  int niNode; // ecx
  int *v18; // ecx
  int v19; // edi
  char *data; // edi
  char *refID; // ebx
  int v22; // eax
  TESObjectCELL *ParentCell; // eax
  int v24; // [esp+2Ch] [ebp-68h]
  __int64 v25; // [esp+30h] [ebp-64h]
  float v26; // [esp+48h] [ebp-4Ch]
  float v28; // [esp+5Ch] [ebp-38h]
  float v29; // [esp+60h] [ebp-34h]
  float x; // [esp+60h] [ebp-34h]
  float v31; // [esp+64h] [ebp-30h]
  float v32; // [esp+68h] [ebp-2Ch]
  float v33; // [esp+68h] [ebp-2Ch]
  float v34; // [esp+68h] [ebp-2Ch]
  float v35; // [esp+6Ch] [ebp-28h]
  float v36; // [esp+70h] [ebp-24h]
  float v37; // [esp+74h] [ebp-20h]
  float v38; // [esp+78h] [ebp-1Ch]
  float v39; // [esp+88h] [ebp-Ch] BYREF
  float v40; // [esp+8Ch] [ebp-8h]
  float v41; // [esp+90h] [ebp-4h]
  float v42; // [esp+98h] [ebp+4h]
  float v43; // [esp+98h] [ebp+4h]
  float v44; // [esp+98h] [ebp+4h]
  float v45; // [esp+98h] [ebp+4h]
  float v46; // [esp+98h] [ebp+4h]
  float v47; // [esp+98h] [ebp+4h]
  float v48; // [esp+98h] [ebp+4h]
  float v49; // [esp+98h] [ebp+4h]

  if ( a5 >= dbl_A2FCC8 )
    ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
  if ( a5 >= 0.0 )
  {
    if ( !LODWORD(a1[1].super.pos[0]) )
    {
      if ( (a1->super.super.flags & 0x20) != 0 )
        return;
      MobileObject_GetCharProxy(a1);
      if ( v32 >= (double)*(float *)(((int (__thiscall *)(MobileObject *, _DWORD, int, int))a1->vtbl->super.GetPos)(
                                       a1,
                                       LODWORD(a3),
                                       a4,
                                       a2)
                                   + 8) )
      {
        vtbl = a1->vtbl;
        v10 = a1->vtbl->super.GetPos((TESObjectREFR *)a1);
        ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))vtbl[1].super.super.super.ClearComponentReferences)(
          a1,
          *(_DWORD *)v10,
          *((_DWORD *)v10 + 1),
          *((_DWORD *)v10 + 2),
          0,
          0,
          1);
      }
      v39 = 0.0;
      v40 = *(float *)&a1[1].vtbl * a8;
      v41 = 0.0;
      v33 = 1.0 - a8 * flt_B37F10;
      *((float *)MobileObject_GetCharProxy(a1) + 0xC9) = v33;
      a1->vtbl->super.GetPos((TESObjectREFR *)a1);
      ((void (__thiscall *)(MobileObject *, _DWORD, float *, int))a1->vtbl->Move)(a1, LODWORD(a8), &v39, 0xF);
      if ( ((unsigned __int8 (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.super.CompareTo)(a1) )
      {
        v11 = (int)a1->vtbl->super.GetPos((TESObjectREFR *)a1);
        v31 = *(float *)v11;
        v34 = *(float *)(v11 + 4);
        v35 = *(float *)(v11 + 8);
        v12 = *(float *)v11 - v36;
        p_pos = (int)&a1->vtbl->super.GetNiNode((TESObjectREFR *)a1)->members.super.m_localTransform.pos;
        *(float *)p_pos = v31;
        *(float *)(p_pos + 4) = v34;
        v39 = v12;
        *(float *)(p_pos + 8) = v35;
        v40 = v34 - v37;
        v41 = v35 - v38;
        v28 = sub_404C90(&v39);
        v29 = *(float *)&a1[1].super.super.type + v28;
        *(float *)&a1[1].super.super.type = v29;
        if ( flt_B37E88 < (double)v29 )
          ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
        if ( v28 / a5 < dbl_A3F3F0 )
          ((void (__thiscall *)(MobileObject *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a1->vtbl[1].super.super.super.ClearComponentReferences)(
            a1,
            LODWORD(Vector3_InitValue_),
            *((_DWORD *)&Vector3_InitValue_ + 1),
            LODWORD(dword_B3F9B0),
            0,
            0,
            0);
      }
    }
    x = a1[1].super.rot.x;
    v14 = a5;
    v42 = x + a5;
    v15 = v42;
    a1[1].super.rot.x = v42;
    y = a1[1].super.rot.y;
    if ( y >= v42 )
    {
      niNode = (int)a1[1].super.niNode;
      if ( niNode )
      {
        v26 = v14;
        MagicCaster_CastingVFX_UpdateTimes_(niNode, v26);
      }
      v18 = (int *)LODWORD(a1[1].super.pos[2]);
      if ( v18 )
      {
        v43 = a1[1].super.rot.y * dbl_A2FAA0;
        v15 = v43;
        if ( v43 < (double)a1[1].super.rot.x )
        {
          v15 = 1.0;
          v44 = 1.0 - (a1[1].super.rot.x - v43) / v43;
          sub_6B7280(v18, v44);
        }
      }
      v45 = x / flt_B37F18;
      v46 = floor(v45);
      v19 = Double_To_SInt32(v46);
      v47 = a1[1].super.rot.x / flt_B37F18;
      v48 = floor(v47);
      if ( v19 != Double_To_SInt32(v48) )
      {
        v49 = (a1[1].super.rot.y - a1[1].super.rot.x) / a1[1].super.rot.y;
        if ( v49 > 0.0 )
        {
          data = (char *)a1[1].super.super.modlist.data;
          refID = (char *)a1[1].super.super.refID;
          v22 = (int)a1->vtbl->super.GetPos((TESObjectREFR *)a1);
          v24 = *(_DWORD *)v22;
          v25 = *(_QWORD *)(v22 + 4);
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
          MagicCaster_TargetEffectHit__(refID, y, v49, v15, data, ParentCell, v24, v25, (int)a1, 0, 0, v49, 1.0);
        }
      }
    }
    else
    {
      ((void (__thiscall *)(MobileObject *, int))a1->vtbl->super.super.Unk_23)(a1, 1);
    }
  }
}
