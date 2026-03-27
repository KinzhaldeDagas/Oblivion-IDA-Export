// jumptable 007ADBF2 default case
// jumptable 007ADC45 default case
void __userpurge def_7ADBF2(
        int a1@<ebx>,
        int a2@<ebp>,
        unsigned __int16 a3@<si>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // eax
  __int16 v19; // ax
  int v20; // eax

  if ( a16 && (*(_BYTE *)(a16 + 0x18) & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 0x21E0) )
      goto LABEL_26;
    v16 = *(_DWORD *)(a10 + 0x1C);
    if ( ((v16 & 0x100) != 0 || *(float *)(a10 + 0x20) < 1.0)
      && LOWORD(dword_B42EAC) != 5
      && (a3 < 0x156u || a3 > 0x15Au)
      && (a3 < 0x160u || a3 > 0x164u) )
    {
      if ( *(int *)(a1 + 0x5C) > 0 && (v17 = *(_DWORD **)(a1 + 0x60)) != 0 && (v16 & 0x200) != 0 )
      {
        sub_7AD1C0(v17, a2);
      }
      else
      {
        sub_5B1E20((BSTextureManager *)(a1 + 0x21C0), (void **)&a9);
        if ( byte_B42CE3 )
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0xC), (void **)a2);
        }
        else if ( byte_B42CE1 && (double)dword_B42CE4 > *(float *)(*(_DWORD *)a2 + 0x28) )
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0x2254), (void **)a2);
        }
        else
        {
          sub_5B1E20((BSTextureManager *)(a1 + 0x2244), (void **)a2);
        }
      }
      goto LABEL_39;
    }
  }
  if ( *(_BYTE *)(a1 + 0x21E0) )
  {
    if ( HIBYTE(a7) && (v18 = *(_DWORD *)(a1 + 0x40), *(_DWORD *)(v18 + 8)) )
    {
      sub_7AD1C0(*(_DWORD **)(v18 + 8), a2);
      dword_B42CB0 += 0x10;
    }
    else
    {
      sub_7ABDE0((_DWORD *)(a1 + 0x14 * (a3 + 0xD)), &a9);
      dword_B42CB0 += 0x10;
    }
    goto LABEL_39;
  }
LABEL_26:
  if ( LOWORD(dword_B42EAC) != 6 )
  {
    if ( byte_B2BB7C )
    {
      v19 = *(_WORD *)(a2 + 4);
      if ( v19 == 0x195 )
      {
        sub_7ABDE0((_DWORD *)(a1 + 0x90), &a9);
        dword_B42CB0 += 0x10;
        goto LABEL_39;
      }
      if ( v19 == 0x76 )
      {
        sub_7ABDE0((_DWORD *)(a1 + 0x7C), &a9);
        dword_B42CB0 += 0x10;
        goto LABEL_39;
      }
    }
    if ( !*(_DWORD *)(a1 + 0x78) )
    {
      v20 = FormHeapAlloc(0x18u);
      if ( v20 )
      {
        *(_DWORD *)v20 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable';
        *(_DWORD *)(v20 + 4) = 0;
        *(_DWORD *)(v20 + 8) = 0;
        *(_DWORD *)(v20 + 0xC) = 0;
      }
      else
      {
        v20 = 0;
      }
      *(_DWORD *)(a1 + 0x78) = v20;
      *(float *)(v20 + 0x14) = 0.0;
      sub_7AA6C0(*(_DWORD **)(a1 + 0x78));
    }
    sub_7ABDE0(*(_DWORD **)(a1 + 0x78), &a9);
  }
  dword_B42CB0 += 0x10;
LABEL_39:
  JUMPOUT(0x7ADC08);
}
