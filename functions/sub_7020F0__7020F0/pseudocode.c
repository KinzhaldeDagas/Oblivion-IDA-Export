void __thiscall sub_7020F0(NiSourceTexture *this)
{
  int *p_pixelData; // edi
  NiDevImageConverter *v3; // eax
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  if ( this->members.unk034 )
  {
    p_pixelData = (int *)&this->members.pixelData;
    if ( !this->members.pixelData )
    {
      v3 = sub_71B280();
      v4 = (*(int (__thiscall **)(NiDevImageConverter *, const char *, int))(*(_DWORD *)v3 + 8))(
             v3,
             this->members.fileName,
             *p_pixelData);
      v7 = v4;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)(v4 + 4));
      v5 = *p_pixelData;
      v6 = *p_pixelData == 0;
      v8 = 0;
      if ( v6 || v4 != v5 )
        sub_55E2A0(p_pixelData, &v7);
      v8 = 0xFFFFFFFF;
      if ( v4 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
    }
  }
}
