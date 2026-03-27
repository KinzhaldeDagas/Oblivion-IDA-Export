void __thiscall sub_798690(int this)
{
  int v2; // ebp
  int v3; // edi

  if ( *(_DWORD *)(this + 0x2C) )
  {
    if ( *(_WORD *)(this + 0x28) )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x10));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x14));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x18));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x24));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x28));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x2C));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x30));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x1C));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x20));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x34));
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x38));
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x10) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x14) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x18) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x24) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x28) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x2C) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x30) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x1C) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x20) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x34) = 0;
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x38) = 0;
        FormHeapFree(*(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x40));
        *(_DWORD *)(v3 + *(_DWORD *)(this + 0x2C) + 0x40) = 0;
        ++v2;
        v3 += 0x44;
      }
      while ( v2 < *(unsigned __int16 *)(this + 0x28) );
    }
  }
}
