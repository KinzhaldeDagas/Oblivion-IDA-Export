Ni2DBuffer *__thiscall sub_6C7AD0(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *v2; // esi
  Ni2DBuffer *v4; // eax
  Ni2DBuffer *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int *v9; // ebx
  Ni2DBuffer *v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v2 = a2;
  nullsub_returnvVoid_1arg((int)a2);
  if ( a2[0x36] >= 0xA010068u )
  {
    v10 = (Ni2DBuffer *)sub_7124A0(a2);
    NiSmartPointer_Set__(this + 8, v10);
    result = (Ni2DBuffer *)sub_7124A0(a2);
    *(this + 0x10) = result;
  }
  else
  {
    v4 = (Ni2DBuffer *)sub_7124A0(a2);
    NiSmartPointer_Set__(this + 8, v4);
    result = 0;
    v12 = 0;
    if ( *(this + 3) )
    {
      v11 = 0;
      while ( 1 )
      {
        v6 = sub_7124A0(v2);
        v7 = (int)*(this + 5);
        v8 = *(_DWORD *)(v7 + v11 + 4);
        v9 = (int *)(v7 + v11 + 4);
        if ( v8 != v6 )
        {
          if ( v8 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
              (**(void (__thiscall ***)(int, int))v8)(v8, 1);
          }
          *v9 = v6;
          if ( v6 )
            InterlockedIncrement((volatile LONG *)(v6 + 4));
        }
        v11 += 0x10;
        result = (Ni2DBuffer *)++v12;
        if ( v12 >= (unsigned int)*(this + 3) )
          break;
        v2 = a2;
      }
    }
  }
  return result;
}
