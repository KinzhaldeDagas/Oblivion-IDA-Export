void __thiscall sub_536D30(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // edx
  _DWORD *v4; // eax

  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 6);
    if ( a2 == v2 )
    {
      v2 = (_DWORD *)a2[1];
    }
    else
    {
      v3 = *(this + 6);
      if ( v2 )
      {
        while ( 1 )
        {
          v4 = *(_DWORD **)(v3 + 4);
          if ( a2 == v4 )
            break;
          v3 = *(_DWORD *)(v3 + 4);
          if ( !v4 )
            goto LABEL_9;
        }
        *(_DWORD *)(v3 + 4) = v4[1];
      }
    }
LABEL_9:
    *(this + 6) = v2;
    sub_5369D0(a2);
    FormHeapFree((unsigned int)a2);
  }
}
