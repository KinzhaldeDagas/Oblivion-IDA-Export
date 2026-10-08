// NiTriStripsData::UpdateNormals. Allocate/zero normal storage, walk strips with alternating winding, skip degenerate triangles, accumulate normalized face directions, normalize all vertex normals, and mark normals dirty. On NBT data the allocator also clears tangent-space planes that this routine does not rebuild.
float *__thiscall NiTriStripsData_UpdateNormals(unsigned __int16 *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // bx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  float *v11; // ecx
  int v12; // ebx
  int v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  int v20; // eax
  double v21; // st4
  float *v22; // eax
  int v23; // eax
  double v24; // st4
  float *v25; // eax
  float *result; // eax
  unsigned __int16 v27; // [esp+8h] [ebp-34h]
  int v28; // [esp+Ch] [ebp-30h]
  int v29; // [esp+10h] [ebp-2Ch]
  int v30; // [esp+14h] [ebp-28h]
  float v31; // [esp+18h] [ebp-24h] BYREF
  float v32; // [esp+1Ch] [ebp-20h]
  float v33; // [esp+20h] [ebp-1Ch]
  float v34; // [esp+24h] [ebp-18h]
  float v35; // [esp+28h] [ebp-14h]
  float v36; // [esp+2Ch] [ebp-10h]
  float v37; // [esp+30h] [ebp-Ch]
  float v38; // [esp+34h] [ebp-8h]
  float v39; // [esp+38h] [ebp-4h]

  NiGeometryData_AllocateAndClearNormals((int)this, 1);// Allocate and zero normal storage before walking triangle strips. /*0x732f89*/
  v2 = *((_DWORD *)this + 0x13); /*0x732f8e*/
  v3 = 0; /*0x732f91*/
  v28 = v2; /*0x732f97*/
  v29 = 0; /*0x732f9b*/
  if ( *(this + 0x22) ) /*0x732f93*/
  {
    while ( 1 ) /*0x732fba*/
    {
      v4 = 2 * (unsigned __int16)v3; /*0x732fba*/
      v27 = 2; /*0x732fc1*/
      v30 = v4; /*0x732fc9*/
      if ( *(_WORD *)(v4 + *((_DWORD *)this + 0x12)) > 2u ) /*0x732fcd*/
      {
        do /*0x73315b*/
        {
          v5 = *(_WORD *)(v2 + 2 * v27 - 4); /*0x732fe7*/
          if ( (v27 & 1) != 0 ) /*0x732fec*/
          {
            v6 = *(_WORD *)(v2 + 2 * v27); /*0x732ff9*/
            v7 = *(_WORD *)(v2 + 2 * v27 - 2); /*0x732ffd*/
          }
          else
          {
            v6 = *(_WORD *)(v2 + 2 * v27 - 2); /*0x732fee*/
            v7 = *(_WORD *)(v2 + 2 * v27); /*0x732ff3*/
          }
          if ( v5 != v6 && v6 != v7 && v7 != v5 )// Ignore degenerate strip triangles, honoring alternating strip winding for valid faces. /*0x733017*/
          {
            v8 = *((_DWORD *)this + 7); /*0x73301d*/
            v9 = 0xC * v6; /*0x73302e*/
            v10 = 0xC * v5; /*0x733032*/
            v11 = (float *)(v9 + v8 + 8); /*0x73303d*/
            v37 = *(float *)(v9 + v8) - *(float *)(v8 + v10); /*0x733044*/
            v12 = 0xC * v7; /*0x73304e*/
            v38 = *(float *)(v9 + v8 + 4) - *(float *)(v8 + v10 + 4); /*0x733054*/
            v39 = *v11 - *(float *)(v8 + v10 + 8); /*0x73305e*/
            v34 = *(float *)(v12 + v8) - *(float *)(v9 + v8); /*0x733068*/
            v35 = *(float *)(v12 + v8 + 4) - *(float *)(v9 + v8 + 4); /*0x733074*/
            v36 = *(float *)(v12 + v8 + 8) - *v11; /*0x733083*/
            v31 = v36 * v38 - v35 * v39; /*0x7330a7*/
            v32 = v39 * v34 - v36 * v37; /*0x7330c1*/
            v33 = v37 * v35 - v34 * v38; /*0x7330cb*/
            NiPoint3_NormalizeApproximateInPlace(&v31); /*0x7330cf*/
            v13 = *((_DWORD *)this + 8); /*0x7330d4*/
            v14 = *(float *)(v13 + v10); /*0x7330d7*/
            v15 = (float *)(v10 + v13); /*0x7330e1*/
            v16 = v14 + v31; /*0x7330e7*/
            v17 = v31; /*0x7330e7*/
            *v15 = v16; /*0x7330e9*/
            v18 = v32; /*0x7330f6*/
            v15[1] = v15[1] + v32; /*0x7330f8*/
            v19 = v33; /*0x733106*/
            v4 = v30; /*0x733108*/
            v15[2] = v15[2] + v33; /*0x73310c*/
            v20 = *((_DWORD *)this + 8); /*0x73310f*/
            v21 = *(float *)(v20 + v9); /*0x733112*/
            v22 = (float *)(v9 + v20); /*0x733115*/
            v2 = v28; /*0x733119*/
            *v22 = v21 + v17; /*0x73311d*/
            v22[1] = v22[1] + v18; /*0x733124*/
            v22[2] = v22[2] + v19; /*0x73312c*/
            v23 = *((_DWORD *)this + 8); /*0x73312f*/
            v24 = *(float *)(v23 + v12); /*0x733132*/
            v25 = (float *)(v12 + v23); /*0x733135*/
            *v25 = v17 + v24; /*0x73313b*/
            v25[1] = v18 + v25[1]; /*0x733140*/
            v25[2] = v19 + v25[2]; /*0x733146*/
          }
          ++v27; /*0x733157*/
        }
        while ( v27 < *(_WORD *)(v4 + *((_DWORD *)this + 0x12)) ); /*0x73315b*/
        v3 = v29; /*0x733161*/
      }
      ++v3; /*0x73316c*/
      v28 = v2 + 2 * *(unsigned __int16 *)(v4 + *((_DWORD *)this + 0x12)); /*0x733176*/
      v29 = v3; /*0x73317a*/
      if ( (unsigned __int16)v3 >= *(this + 0x22) ) /*0x73317e*/
        break; /*0x73317e*/
      v2 += 2 * *(unsigned __int16 *)(v4 + *((_DWORD *)this + 0x12)); /*0x732fb0*/
    }
  }
  result = NiPoint3_NormalizeStridedArray(*((float **)this + 8), *(this + 4), 0xC);// Normalize every accumulated strip vertex normal with 12-byte stride. /*0x733191*/
  *(this + 0x17) |= 2u;                         // Mark the normal channel dirty (bit 1). /*0x733199*/
  return result; /*0x73319e*/
}
