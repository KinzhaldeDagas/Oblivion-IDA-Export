void __thiscall sub_680BB0(BSTextureManager *this, _WORD *a2)
{
  char *v2; // ebx
  float *v3; // eax
  NiTPointerList_Node_void *start; // esi
  unsigned __int16 *data; // edx
  unsigned __int16 v6; // dx
  float *v7; // eax
  float v8; // [esp+0h] [ebp-4h]

  if ( a2 )
  {
    if ( this->unk00.numItems )
    {
      v2 = (char *)dword_B3BF00;
      v3 = 0;
      if ( *a2 < (unsigned __int16)word_B3BF04 )
        v3 = (float *)&v2[0x10 * (unsigned __int16)*a2];
      start = this->unk00.start;
      v8 = *v3;
      if ( start )
      {
        while ( 1 )
        {
          data = (unsigned __int16 *)start->data;
          if ( !data )
            break;
          v6 = *data;
          v7 = 0;
          if ( v6 < (unsigned __int16)word_B3BF04 )
            v7 = (float *)&v2[0x10 * v6];
          if ( *v7 >= (double)v8 )
            break;
          start = start->next;
          if ( !start )
            goto LABEL_12;
        }
        sub_589640(this, (int)start, &a2);
      }
      else
      {
LABEL_12:
        sub_5B1E20(this, (void **)&a2);
      }
    }
    else
    {
      sub_6AA320(this, &a2);
    }
  }
}
