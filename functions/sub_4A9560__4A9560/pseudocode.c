NiNode *__thiscall sub_4A9560(void *this, int a2, int a3)
{
  int v3; // edi
  NiNode *v4; // ebp
  int ExtraCount; // ebx
  int v6; // eax
  int v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // edi
  BSStringT v10; // [esp+18h] [ebp-14h] BYREF
  unsigned int v11; // [esp+28h] [ebp-4h]

  v3 = a2;
  v4 = sub_4B3750((int)this, a2, a3);
  if ( v3 )
    ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(v3 + 0x44));
  else
    ExtraCount = 1;
  if ( v4 )
  {
    if ( ExtraCount < iMaxArrowsInQuiver )
    {
      if ( ExtraCount == 1 )
      {
        v6 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, "ArrowQuiver");
        if ( v6 )
        {
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v6 + 0x1C) + 0x88))(
            *(_DWORD *)(v6 + 0x1C),
            &a3,
            v6);
          sub_7016A0((NiD3DVertexShader *)&a3);
        }
        sub_8A5720((int)v4);
      }
      else
      {
        while ( ExtraCount < iMaxArrowsInQuiver )
        {
          v10.m_data = 0;
          *(_DWORD *)&v10.m_dataLen = 0;
          v11 = 0;
          BSStringT_Static_Format(&v10, "Arrow%d", ExtraCount);
          v8 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, v10.m_data);
          if ( v8 )
          {
            (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v8 + 0x1C) + 0x88))(
              *(_DWORD *)(v8 + 0x1C),
              &a2,
              v8);
            if ( a2 )
            {
              v9 = (void (__thiscall ***)(_DWORD, int))a2;
              if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
                (**v9)(v9, 1);
            }
          }
          v11 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)v10.m_data);
          v10.m_data = 0;
          *(_DWORD *)&v10.m_dataLen = 0;
          ++ExtraCount;
        }
      }
    }
  }
  return v4;
}
