void __thiscall sub_5F8300(TESObjectREFR *this, int a2, int a3)
{
  int v4; // eax
  TESForm *v5; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  int v7; // edi
  int v8; // eax
  int i; // esi
  char *m_data; // ebp
  int v11; // eax
  signed int ItemCount; // [esp+18h] [ebp-18h]
  BSStringT v13; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+2Ch] [ebp-4h]

  if ( *((_DWORD *)this + 0x16) )
  {
    v4 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0xF4))(*((_DWORD *)this + 0x16), 1);
    if ( v4 )
    {
      v5 = *(TESForm **)(v4 + 8);
      ItemCount = 0;
      if ( TESObjectREFR_GetContainer(this) )
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this);
        if ( ContainerExtraDataForRef )
          ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v5);
      }
      if ( (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0x128))(*((_DWORD *)this + 0x16), a2) )
      {
        v7 = a3;
        if ( !a3 )
          v7 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0x128))(*((_DWORD *)this + 0x16), a2);
        v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v7 + 0x58))(v7, "Arrow:0");
        if ( v8 )
          *(_WORD *)(v8 + 0x18) &= ~1u;
        for ( i = 1; i < iMaxArrowsInQuiver; ++i )
        {
          v13.m_data = 0;
          v13.m_dataLen = 0;
          v13.m_bufLen = 0;
          v14 = 0;
          BSStringT_Static_Format(&v13, "Arrow%d", i);
          m_data = v13.m_data;
          v11 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v7 + 0x58))(v7, v13.m_data);
          if ( v11 )
          {
            if ( i < ItemCount )
              *(_WORD *)(v11 + 0x18) &= ~1u;
            else
              *(_WORD *)(v11 + 0x18) |= 1u;
          }
          v14 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
          v13.m_data = 0;
          v13.m_bufLen = 0;
          v13.m_dataLen = 0;
        }
      }
    }
  }
}
