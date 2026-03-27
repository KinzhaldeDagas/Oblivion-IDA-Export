void __thiscall sub_7D5790(_DWORD *this, int a2)
{
  char v3; // bl
  int v4; // esi
  bool v5; // zf
  volatile LONG *v6; // edi
  DWORD CurrentThreadId; // eax
  _DWORD *v8; // edi
  void (__thiscall ***v9)(_DWORD, int); // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  float v12; // edx
  float v13; // eax
  float v14; // ecx
  volatile LONG *v15; // [esp+14h] [ebp-20h] BYREF
  float v16[4]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v17; // [esp+30h] [ebp-4h]

  v3 = 0;
  v15 = 0;
  v4 = a2;
  if ( !sub_7B8150(a2) || (v5 = *sub_405760((NiGeometry *)v4, &v15) == 0, v3 = 1, LOBYTE(a2) = 0, v5) )
    LOBYTE(a2) = 1;
  if ( (v3 & 1) != 0 )
  {
    v6 = v15;
    if ( v15 )
    {
      if ( !InterlockedDecrement(v15 + 1) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
    }
  }
  if ( !(_BYTE)a2 )
  {
    EnterCriticalSection(&stru_B3FA00);
    CurrentThreadId = GetCurrentThreadId();
    ++dword_B3FA7C;
    dword_B3FA78 = CurrentThreadId;
    v8 = *((_DWORD **)*sub_405760((NiGeometry *)v4, (volatile LONG **)&a2) + 6);
    if ( a2 )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))a2;
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
        (**v9)(v9, 1);
    }
    v5 = dword_B3FA7C-- == 1;
    if ( v5 )
      dword_B3FA78 = 0;
    LeaveCriticalSection(&stru_B3FA00);
    if ( v8 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) >= 1
        && (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) <= 0xA )
      {
        v10 = (_DWORD *)*(this + 0x51);
        if ( v10 )
        {
          while ( 1 )
          {
            v5 = v10[2] == v4;
            v11 = v10;
            v10 = (_DWORD *)*v10;
            if ( v5 )
              break;
            if ( !v10 )
              goto LABEL_21;
          }
          sub_7C58F0(this + 0x39, v11, (_DWORD *)*(this + 0x51));
          if ( *((_BYTE *)this + 0x104) )
          {
            if ( !*((_BYTE *)this + 0xF4) )
            {
              v12 = *(float *)(v4 + 0x24);
              v13 = *(float *)(v4 + 0x28);
              v16[0] = *(float *)(v4 + 0x20);
              v14 = *(float *)(v4 + 0x2C);
              v16[1] = v12;
              v16[3] = v14;
              v16[2] = v13;
              sub_7ECEC0(v8, v16);
            }
          }
        }
        else
        {
LABEL_21:
          if ( (v8[7] & 0x1000) == 0 || (*(int (__thiscall **)(_DWORD *))(*v8 + 0x54))(v8) == 4 )
          {
            sub_7EE330(v8, this, v4 + 0x20);
            a2 = v4;
            if ( v4 )
              InterlockedIncrement((volatile LONG *)(v4 + 4));
            v17 = 0;
            sub_749800(this + 0x39, &a2);
            v17 = 0xFFFFFFFF;
            if ( v4 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
                (**(void (__thiscall ***)(int, int))v4)(v4, 1);
            }
          }
        }
      }
    }
  }
}
