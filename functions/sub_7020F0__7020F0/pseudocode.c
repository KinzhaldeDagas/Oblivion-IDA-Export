void __thiscall sub_7020F0(NiSourceTexture *this)
{
  int *p_pixelData; // edi
  NiDevImageConverter *v3; // eax
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int incoming; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v8; // [esp+18h] [ebp-4h]

  if ( this->members.unk034 ) /*0x702115*/
  {
    p_pixelData = (int *)&this->members.pixelData; /*0x70211f*/
    if ( !this->members.pixelData ) /*0x70211b*/
    {
      v3 = sub_71B280(); /*0x702124*/
      v4 = (*(int (__thiscall **)(NiDevImageConverter *, const char *, int))(*(_DWORD *)v3 + 8))( /*0x702139*/
             v3,
             this->members.fileName,
             *p_pixelData);
      incoming = v4; /*0x70213d*/
      if ( v4 ) /*0x702141*/
        InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x702147*/
      v5 = *p_pixelData; /*0x70214d*/
      v6 = *p_pixelData == 0; /*0x70214f*/
      v8 = 0; /*0x702151*/
      if ( v6 || v4 != v5 ) /*0x70215d*/
        OB_NiSmartPointer_Assign_010201A0(p_pixelData, &incoming); /*0x70216d*/
      v8 = 0xFFFFFFFF; /*0x702174*/
      if ( v4 ) /*0x70217c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x702182*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x702194*/
      }
    }
  }
}
