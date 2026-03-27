char __thiscall sub_4B1A50(float *this, NiAVObject *a2, float *a3, int a4)
{
  int v5; // ecx
  char v7; // bl
  double v9; // st5
  double v10; // st5
  double v11; // st6
  int v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float v21; // [esp+1Ch] [ebp-38h]
  double v22; // [esp+1Ch] [ebp-38h]
  float v23; // [esp+24h] [ebp-30h]
  float z; // [esp+24h] [ebp-30h]
  float v25; // [esp+24h] [ebp-30h]
  float v26; // [esp+24h] [ebp-30h]
  float v27; // [esp+24h] [ebp-30h]
  float v28; // [esp+28h] [ebp-2Ch]
  float v29; // [esp+28h] [ebp-2Ch]
  double v30; // [esp+2Ch] [ebp-28h]
  double v31; // [esp+34h] [ebp-20h]
  float v32; // [esp+3Ch] [ebp-18h]
  float v33; // [esp+40h] [ebp-14h]
  float v34; // [esp+44h] [ebp-10h]
  float v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+58h] [ebp+4h]
  float v37; // [esp+58h] [ebp+4h]
  float v38; // [esp+58h] [ebp+4h]
  float v39; // [esp+58h] [ebp+4h]
  float v40; // [esp+58h] [ebp+4h]
  float v41; // [esp+58h] [ebp+4h]
  float v42; // [esp+58h] [ebp+4h]
  float v43; // [esp+58h] [ebp+4h]
  float v44; // [esp+5Ch] [ebp+8h]
  float v45; // [esp+5Ch] [ebp+8h]
  float v46; // [esp+5Ch] [ebp+8h]
  float v47; // [esp+5Ch] [ebp+8h]
  float v48; // [esp+60h] [ebp+Ch]
  float v49; // [esp+60h] [ebp+Ch]
  float v50; // [esp+60h] [ebp+Ch]
  float v51; // [esp+60h] [ebp+Ch]
  float scale; // [esp+60h] [ebp+Ch]
  float v53; // [esp+60h] [ebp+Ch]
  float v54; // [esp+60h] [ebp+Ch]
  float v55; // [esp+60h] [ebp+Ch]
  float v56; // [esp+60h] [ebp+Ch]
  float v57; // [esp+60h] [ebp+Ch]
  float v58; // [esp+60h] [ebp+Ch]
  float v59; // [esp+60h] [ebp+Ch]

  v5 = *((_DWORD *)this + 0x1F);
  v7 = 0;
  if ( (v5 & 0x48) != 0 )
  {
    v21 = flt_B33E9C;
    scale = a2[1].members.m_localTransform.scale;
    v44 = a2[1].members.m_worldTransform.rot.data[0][0];
    if ( (v5 & 0x40) != 0 )
      v21 = v21 * dbl_A2FAA0;
    z = a2[1].members.m_localTransform.pos.z;
    v25 = ((double)GetRandomLargeInteger_(0) / dbl_A43320 + dbl_A43318) * v21 + z;
    v53 = ((double)GetRandomLargeInteger_(0) / dbl_A43320 + dbl_A43310) * v21 + scale;
    v45 = ((double)GetRandomLargeInteger_(0) / dbl_A43308 + dbl_A43300) * v21 + v44;
    v13 = v25;
    v14 = dbl_A3D5B0;
    if ( v14 < v25 )
    {
      v26 = v13 - v14;
      v13 = v26;
    }
    v15 = v53;
    if ( v53 > v14 )
    {
      v53 = v15 - v14;
      v15 = v53;
    }
    if ( v45 > v14 )
      v45 = v45 - v14;
    ++a2[1].members.super.m_controller;
    a2[1].members.m_localTransform.pos.z = v13;
    ++a2[1].members.super.m_controller;
    a2[1].members.m_localTransform.scale = v15;
    ++a2[1].members.super.m_controller;
    a2[1].members.m_worldTransform.rot.data[0][0] = v45;
    v31 = v13 + dbl_A432F8;
    v28 = v31 + v31;
    v29 = sin(v28);
    v30 = v53 + dbl_A2FAA0;
    v54 = v30 * dbl_A432F8;
    v55 = sin(v54);
    v27 = v55;
    v22 = v45 + dbl_A432F0;
    v56 = v22 * dbl_A432E8;
    v57 = sin(v56);
    v46 = v57;
    v58 = flt_B08150 * v29 * v27 * dbl_A2FAA0;
    if ( flt_B08150 + v58 <= dbl_A2FC68 )
      v58 = 0.0;
    v32 = v29 * v58;
    a2->members.m_localTransform.pos.x = v32;
    v33 = v27 * v58;
    a2->members.m_localTransform.pos.y = v33;
    v34 = v58 * v46;
    a2->members.m_localTransform.pos.z = v34;
    NiAVObject_UpdateNiAVObject(a2, 0.0, 1);
    v35 = v22 * dbl_A30E48;
    v36 = sin(v35);
    v47 = v36;
    v37 = v30 * dbl_A43300;
    v38 = sin(v37);
    v59 = v38;
    v39 = v31 * dbl_A43318;
    v40 = sin(v39);
    v16 = dbl_A2FAA0;
    v41 = (v59 + 1.0) * v16 * (v40 + 1.0) * v16 / dbl_A30E48 + v47 / dbl_A3F3F0;
    v17 = v41;
    if ( v41 > 1.0 )
      v41 = 1.0;
    if ( v41 >= dbl_A3D360 )
    {
      if ( v17 <= 1.0 )
        v18 = v17;
      else
        v18 = (float)1.0;
    }
    else
    {
      v18 = flt_A30634;
    }
    v42 = v16 + v18 * v16;
    v19 = (v42 * dbl_A432E0 + dbl_A432D8) * *(this + 0x22);
    ++a2[1].members.super.m_controller;
    v43 = v19;
    a2[1].members.m_localTransform.rot.data[0][0] = v43;
  }
  else if ( (char)v5 < 0 || (v5 & 0x100) != 0 || a4 && 0.0 == *(float *)(a4 + 0xC) )
  {
    v48 = a2[1].members.m_localTransform.rot.data[0][0];
    v23 = flt_A2FAAC;
    if ( (v5 & 0x100) != 0 )
      v23 = flt_A43328;
    v9 = flt_B33E9C * v23;
    if ( *a3 <= (double)v48 )
    {
      v11 = v23;
      v10 = v48 - v9;
    }
    else
    {
      v10 = v48 + v9;
      v11 = v23;
    }
    ++a2[1].members.super.m_controller;
    v49 = v10;
    a2[1].members.m_localTransform.rot.data[0][0] = v49;
    v50 = v49 - *a3;
    v51 = fabs(v50);
    if ( v51 < v11 )
    {
      if ( a4 && 0.0 == *(float *)(a4 + 0xC) )
      {
        v7 = 1;
      }
      else
      {
        v12 = *((_DWORD *)this + 0x1F);
        if ( (v12 & 0x48) != 0 )
        {
          *a3 = ((double)(GetRandomLargeInteger_(0) % 0x4B) * fConstant_Inv100 + dbl_A3C770) * *(this + 0x22);
        }
        else if ( (char)v12 < 0 || (v12 & 0x100) != 0 )
        {
          if ( flt_A3D65C >= (double)*a3 )
            *a3 = *(this + 0x22);
          else
            *a3 = *(this + 0x22) * dbl_A3C770;
        }
      }
    }
  }
  if ( a2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&a2->members) )
      a2->vtbl->super.super.Destructor((NiRefObject *)a2, 1);
  }
  return v7;
}
