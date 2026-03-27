LONG __thiscall sub_7FA470(BSImageSpaceShader *this, NiRenderedTexture *a2)
{
  LONG v3; // esi
  LONG result; // eax
  UInt32 *p_Unk080; // ecx
  NiRenderedTexture *v6; // ebx

  v3 = 0xFFFFFFFF;
  result = 2;
  p_Unk080 = &this->member.Unk080;
  while ( v3 == 0xFFFFFFFF )
  {
    if ( !p_Unk080[0xFFFFFFFF] )
    {
      v3 = result - 2;
      break;
    }
    if ( !*p_Unk080 )
    {
      v3 = result - 1;
      break;
    }
    if ( !p_Unk080[1] )
    {
      v3 = result;
      break;
    }
    if ( !p_Unk080[2] )
      v3 = result + 1;
    result += 4;
    p_Unk080 += 4;
    if ( (unsigned int)(result - 2) >= 0x10 )
    {
      if ( v3 == 0xFFFFFFFF )
        return result;
      break;
    }
  }
  if ( a2 )
  {
    result = (LONG)a2->__vftable->super.super.GetType(a2);
    if ( result )
    {
      while ( (char *)result != dword_B3F95C )
      {
        result = *(_DWORD *)(result + 4);
        if ( !result )
          goto LABEL_17;
      }
      v6 = *((NiRenderedTexture **)&this->member.Unk07C + v3);
      if ( v6 != a2 )
      {
        if ( v6 )
        {
LABEL_26:
          if ( !InterlockedDecrement((volatile LONG *)&v6->member) )
            v6->__vftable->super.super.super.Destructor((NiRefObject *)v6, 1);
        }
LABEL_28:
        *((_DWORD *)&this->member.Unk07C + v3) = a2;
        return InterlockedIncrement((volatile LONG *)&a2->member);
      }
    }
    else
    {
LABEL_17:
      result = (LONG)a2->__vftable->super.super.GetType(a2);
      if ( result )
      {
        while ( (_UNKNOWN *)result != &unk_B3FF04 )
        {
          result = *(_DWORD *)(result + 4);
          if ( !result )
            return result;
        }
        v6 = *((NiRenderedTexture **)&this->member.Unk07C + v3);
        if ( v6 != a2 )
        {
          if ( v6 )
            goto LABEL_26;
          goto LABEL_28;
        }
      }
    }
  }
  return result;
}
