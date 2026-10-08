char __cdecl sub_8AF8C0(float *a1, __m128 *a2, int a3, int a4)
{
  char result; // al
  NiObject *BhkCollisionObject; // eax
  NiObjectVtbl *vftable; // esi
  NiObject *(__thiscall *Unk_02)(NiObject *); // eax
  int v8; // eax
  unsigned int v9; // eax
  NiObject *v10; // eax
  __m128 **v11; // edi
  int v12; // eax
  __m128 v13; // xmm0
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  float *i; // eax
  char v19; // [esp+13h] [ebp-FDh]
  NiObject *v20; // [esp+1Ch] [ebp-F4h]
  __m128 v21[4]; // [esp+20h] [ebp-F0h] BYREF
  __m128 v22; // [esp+60h] [ebp-B0h] BYREF
  __int128 v23; // [esp+70h] [ebp-A0h]
  __m128 v24[4]; // [esp+80h] [ebp-90h] BYREF
  __m128 v25[2]; // [esp+C0h] [ebp-50h] BYREF
  _DWORD v26[5]; // [esp+ECh] [ebp-24h]

  result = 0; /*0x8af8e8*/
  v19 = 0; /*0x8af8f2*/
  if ( !a1 ) /*0x8af8f6*/
    return result; /*0x8af8f6*/
  BhkCollisionObject = (NiObject *)NiAVObject_GetBhkCollisionObject((int)a1); /*0x8af8fd*/
  v20 = BhkCollisionObject; /*0x8af907*/
  if ( BhkCollisionObject ) /*0x8af90b*/
  {
    vftable = BhkCollisionObject[2].__vftable; /*0x8af911*/
    if ( vftable ) /*0x8af916*/
    {
      Unk_02 = vftable->Unk_02; /*0x8af91c*/
      if ( Unk_02 && (v8 = (int)Unk_02 + 0x14) != 0 ) /*0x8af926*/
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x8af928*/
      else
        v9 = 0; /*0x8af92d*/
      if ( (v9 & 0x3F) == 8 ) /*0x8af937*/
      {
        switch ( (v9 >> 8) & 0x1F ) /*0x8af956*/
        {
          case 1u: /*0x8af956*/
            if ( !(_BYTE)a4 ) /*0x8af966*/
              goto LABEL_11; /*0x8af966*/
            break; /*0x8af966*/
          case 2u: /*0x8af956*/
          case 3u: /*0x8af956*/
          case 4u: /*0x8af956*/
          case 5u: /*0x8af956*/
          case 6u: /*0x8af956*/
          case 7u: /*0x8af956*/
          case 0xBu: /*0x8af956*/
          case 0xCu: /*0x8af956*/
          case 0xDu: /*0x8af956*/
LABEL_11:
            v10 = (NiObject *)sub_494F10(vftable); /*0x8af96c*/
            if ( !v10 ) /*0x8af975*/
              break; /*0x8af975*/
            v11 = (__m128 **)NiRTTI_Cast((BSStringT *)&stru_BA7FD8, v10); /*0x8af986*/
            if ( !v11 ) /*0x8af98d*/
              break; /*0x8af98d*/
            (*((void (__thiscall **)(NiObjectVtbl *, __m128 *))vftable->super.Destructor + 0x2B))(vftable, v21); /*0x8af9a2*/
            if ( NiRTTI::IsObjectOfRTTIType(&MEMORY[0xBA7A20], v20) ) /*0x8af9ae*/
            {
              if ( !sub_607840(vftable) || 1.0 == *(float *)&v20[2].members.m_uiRefCount ) /*0x8af9d7*/
              {
                sub_5398E0((int)v21, a1 + 0x19); /*0x8af9e6*/
                if ( NiRTTI::IsObjectOfRTTIType(&stru_BA8018, (NiObject *)vftable) ) /*0x8af9f1*/
                {
                  v24[0] = v21[0]; /*0x8afa02*/
                  v24[1] = v21[1]; /*0x8afa0f*/
                  v24[2] = v21[2]; /*0x8afa1f*/
                  v24[3] = v21[3]; /*0x8afa34*/
                  hkMatrix3_SetFromQuaternion(v25[0].m128_f32, (float *)&vftable->PostLoad); /*0x8afa3c*/
                  *(_OWORD *)&v26[1] = *(_OWORD *)&vftable->DumpAttributes; /*0x8afa59*/
                  sub_8B1F70(v21, v24, v25); /*0x8afa61*/
                }
              }
            }
            else
            {
              (*((void (__thiscall **)(NiObjectVtbl *, __m128 *))vftable->super.Destructor + 0x2B))(vftable, v21); /*0x8afa75*/
            }
            if ( !sub_8B6DC0(v11, a2, v21, &v22) ) /*0x8afa88*/
              break; /*0x8afa8f*/
            v12 = a3; /*0x8afa91*/
            if ( !*(_DWORD *)a3 ) /*0x8afa98*/
              goto LABEL_23; /*0x8afa98*/
            if ( *((float *)&v23 + 3) < (double)*(float *)(a3 + 0x2C) ) /*0x8afaa8*/
            {
              v12 = a3; /*0x8afaaa*/
LABEL_23:
              v13 = v22; /*0x8afaae*/
              *(_DWORD *)v12 = vftable; /*0x8afab3*/
              *(__m128 *)(v12 + 0x10) = v13; /*0x8afab5*/
              *(__int128 *)(v12 + 0x20) = v23; /*0x8afabe*/
            }
            break; /*0x8afabe*/
          default:
            break;
        }
      }
    }
  }
  v14 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 8))(a1); /*0x8afac2*/
  v15 = v14; /*0x8afacb*/
  if ( v14 ) /*0x8afacf*/
  {
    v16 = *(unsigned __int16 *)(v14 + 0xB6); /*0x8afad1*/
    v17 = 0; /*0x8afad8*/
    if ( *(_WORD *)(v15 + 0xB6) ) /*0x8afad1*/
    {
      if ( v16 ) /*0x8afae0*/
        goto LABEL_28; /*0x8afae0*/
      for ( i = 0; ; i = *(float **)(*(_DWORD *)(v15 + 0xB0) + 4 * v17) ) /*0x8afae2*/
      {
        v19 |= sub_8AF8C0(i, a2, a3, a4); /*0x8afb03*/
        if ( *(unsigned __int16 *)(v15 + 0xB6) <= (unsigned int)++v17 ) /*0x8afb16*/
          break; /*0x8afb16*/
LABEL_28:
        ; /*0x8afae6*/
      }
    }
  }
  return v19; /*0x8afb1c*/
}
