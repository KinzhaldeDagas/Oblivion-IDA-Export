_DWORD *__userpurge sub_767520@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        _DWORD *a12)
{
  _DWORD *result; // eax
  int v14; // edi
  NiObject *v15; // ebx
  _DWORD *v16; // edi
  _DWORD *v17; // ebp
  void *v18; // ecx
  int v19; // ebp
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  bool v23; // cf
  int v25; // [esp+C4h] [ebp-2Ch]
  int v28; // [esp+E0h] [ebp-10h]
  int v29; // [esp+E4h] [ebp-Ch]
  int v30; // [esp+E8h] [ebp-8h]
  unsigned int v31; // [esp+ECh] [ebp-4h]
  _DWORD *retaddr; // [esp+F0h] [ebp+0h]

  result = a7;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a7[3] + 0xC);
    if ( !a5 || (v15 = NiRTTI_Cast(&NiD3DShaderInterfaceString, *(NiObject **)(a5 + 0xBC))) == 0 )
      v15 = *(NiObject **)(a1 + 0xA94);
    v16 = *(_DWORD **)(v14 + 0x28);
    v17 = (_DWORD *)a9;
    result = (_DWORD *)((int (__thiscall *)(NiObject *, int, _DWORD *, _DWORD *, _DWORD, _DWORD, int, int))v15->__vftable->Save)(
                         v15,
                         a5,
                         a7,
                         v16,
                         *(_DWORD *)(a1 + 0xC),
                         *(_DWORD *)(a1 + 0x10),
                         a8,
                         a9);
    if ( !result )
    {
      ((void (__thiscall *)(NiObject *, int, _DWORD *, _DWORD *, _DWORD, _DWORD, int, int, int, int, int))v15->__vftable->Compare)(
        v15,
        a5,
        a7,
        v16,
        *(_DWORD *)(a1 + 0xC),
        *(_DWORD *)(a1 + 0x10),
        a8,
        a9,
        a3,
        a4,
        a2);
      retaddr = (_DWORD *)retaddr[2];
      if ( ((int (__thiscall *)(NiObject *))v15->__vftable->Unk_12)(v15) )
      {
        do
        {
          ((void (__thiscall *)(NiObject *, int, int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))v15->__vftable->DumpAttributes)(
            v15,
            a8,
            a10,
            v16,
            *(_DWORD *)(a1 + 0xC),
            *(_DWORD *)(a1 + 0x10),
            a11,
            v17);
          *(_DWORD *)(a1 + 0x658) = *v17;
          v18 = (void *)v17[1];
          *(_DWORD *)(a1 + 0x65C) = v18;
          *(_DWORD *)(a1 + 0x660) = v17[2];
          *(_DWORD *)(a1 + 0x664) = v17[3];
          v31 = 0;
          if ( retaddr )
          {
            v19 = a5;
            do
            {
              if ( v15 == *(NiObject **)(a1 + 0xA94)
                && (unsigned int)*(unsigned __int16 *)(v19 + 0x20) > *(_DWORD *)(a1 + 0x6D8) )
              {
                TESTexture::ClearComponentReferences(v18);
              }
              else
              {
                v20 = *(_DWORD *)(v19 + 0x28);
                v25 = *(_DWORD *)(a1 + 0x10);
                ((void (__thiscall *)(NiObject *, int, int, int, int, _DWORD))v15->__vftable->DumpChildAttributes)(
                  v15,
                  a8,
                  a10,
                  v19,
                  v20,
                  *(_DWORD *)(a1 + 0xC));
                result = (_DWORD *)((int (__thiscall *)(NiObject *, int, int, int, _DWORD))v15->__vftable->Unk_0F)(
                                     v15,
                                     a5,
                                     v19,
                                     v20,
                                     *(_DWORD *)(a1 + 0xC));
                v16 = result;
                if ( !result )
                  return result;
                ((void (__thiscall *)(NiObject *, int, _DWORD *, int, _DWORD *, _DWORD, _DWORD, int, int, int, int, _DWORD *))v15->__vftable->Unk_0E)(
                  v15,
                  a5,
                  a7,
                  v19,
                  result,
                  *(_DWORD *)(a1 + 0xC),
                  *(_DWORD *)(a1 + 0x10),
                  a8,
                  a9,
                  v25,
                  a11,
                  a12);
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x8AC) + 0xFF0) + 4))(*(_DWORD *)(*(_DWORD *)(a1 + 0x8AC) + 0xFF0));
                v29 = 0;
                v30 = 0;
                if ( v16[0x11] )
                {
                  do
                  {
                    v21 = v16[0x12];
                    if ( v21 )
                    {
                      v22 = *(unsigned __int16 *)(v21 + 2 * v30) - 2;
                      v28 = v22;
                    }
                    else
                    {
                      v28 = v16[0xF];
                      v22 = v28;
                    }
                    (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 0x280)
                                                                                         + 0x148))(
                      *(_DWORD *)(a1 + 0x280),
                      a6,
                      v16[0xD],
                      0,
                      *(unsigned __int16 *)(v19 + 0x1C),
                      v29,
                      v22);
                    v23 = (unsigned int)(v30 + 1) < v16[0x11];
                    v29 += v28 + 2;
                    ++v30;
                  }
                  while ( v23 );
                }
                ((void (__thiscall *)(NiObject *, int, int, int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))v15->__vftable->Unk_10)(
                  v15,
                  a8,
                  a10,
                  v19,
                  v16,
                  *(_DWORD *)(a1 + 0xC),
                  *(_DWORD *)(a1 + 0x10),
                  a11,
                  a12);
              }
              v19 += 0x2C;
              ++v31;
            }
            while ( v31 < (unsigned int)retaddr );
            v17 = a12;
          }
          *(_WORD *)(a9 + 0x2E) &= 0xF000u;
        }
        while ( ((int (__thiscall *)(NiObject *))v15->__vftable[1].super.Destructor)(v15) );
      }
      ((void (__thiscall *)(NiObject *, int, int, _DWORD *, _DWORD))v15->__vftable->Unk_11)(
        v15,
        a8,
        a10,
        v16,
        *(_DWORD *)(a1 + 0xC));
      return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0xFC))(
                         *(_DWORD *)(a1 + 0x8AC),
                         0);
    }
  }
  return result;
}
