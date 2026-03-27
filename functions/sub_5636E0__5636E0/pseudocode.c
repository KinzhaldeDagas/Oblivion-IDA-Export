void __thiscall sub_5636E0(_DWORD *this, int a2)
{
  int v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // kr00_4
  int v8; // ecx
  int v9; // eax
  __int16 v10; // dx
  int v11; // ecx
  unsigned int v12; // eax
  char *v13; // edi
  char *v15; // eax
  char v17; // dl
  NiObject *v18; // eax
  int v19; // eax
  Ni2DBuffer *v20; // eax
  bhkRefObject *v21; // eax
  float v22; // [esp+20h] [ebp-6ACh]
  _DWORD v23[291]; // [esp+24h] [ebp-6A8h] BYREF
  int v24; // [esp+4B0h] [ebp-21Ch] BYREF
  char Src[4]; // [esp+4B4h] [ebp-218h] BYREF
  int v26; // [esp+4B8h] [ebp-214h]
  int v27; // [esp+4BCh] [ebp-210h]
  int v28; // [esp+4C0h] [ebp-20Ch]
  __int16 v29; // [esp+4C4h] [ebp-208h]
  char v30[4]; // [esp+5B4h] [ebp-118h]
  char v31[260]; // [esp+5B8h] [ebp-114h] BYREF
  unsigned int v32; // [esp+6C8h] [ebp-4h]

  if ( *(this + 3) )
  {
    if ( *(this + 2) != 2 )
    {
      sub_5616F0(this);
      sub_5622B0((float **)this, a2);
      sub_562E20((char *)this, (float *)a2);
      v3 = *(this + 0x10);
      if ( v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
        *(this + 0x10) = 0;
      }
      v4 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x24) + 0x14))(a2 + 0x24);
      v5 = v31;
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
      v7 = strlen(v31);
      if ( v7 > 4 )
        v30[v7] = 0;
      NiStream::NiStream((NiStream *)v23);
      v23[0] = &BSStream::`vftable';
      v24 = 0;
      v23[0x122] = 0;
      v8 = dword_A6552C;
      v9 = dword_A65534;
      v26 = dword_A65530;
      v10 = word_A6553C;
      *(_DWORD *)Src = v8;
      v11 = dword_A65538;
      v27 = v9;
      v29 = v10;
      v32 = 0;
      v28 = v11;
      v12 = strlen(v31) + 1;
      v13 = (char *)&v24 + 3;
      while ( *++v13 )
        ;
      qmemcpy(v13, v31, v12);
      v15 = (char *)&v24 + 3;
      while ( *++v15 )
        ;
      v17 = byte_A65528;
      *(_DWORD *)v15 = dword_A65524;
      v15[4] = v17;
      if ( sub_6F9980((char *)v23, Src, 0) )
      {
        if ( v23[0x84] == 1 )
        {
          v18 = NiRTTI_Cast((BSStringT *)dword_B3FA80, *(NiObject **)v23[0x82]);
          v19 = sub_4A05E0((int)v18);
          if ( v19 )
          {
            v20 = *(Ni2DBuffer **)(v19 + 0x10);
            if ( v20 )
              NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v20);
          }
        }
      }
      if ( !*(this + 0x10) && flt_A56670 < (double)*((float *)this + 0x14) )
      {
        v22 = *((float *)this + 0x15) * dbl_A2FAA0;
        v21 = sub_8AFDC0(*((float *)this + 0x14), v22);
        NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, (Ni2DBuffer *)v21);
      }
      v32 = 0xFFFFFFFF;
      BSStream::~BSStream((BSStream *)v23);
    }
  }
}
