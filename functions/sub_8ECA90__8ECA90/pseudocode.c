double __cdecl sub_8ECA90(unsigned int a1)
{
  int v1; // edx
  signed int v2; // esi

  v1 = (unsigned __int8)(a1 >> 0x17) - 0x7F;
  v2 = ~((int)((a1 & 0x7FFFFFFF) - 1) >> 0x1F) & a1;
  return COERCE_FLOAT(
           (v2 >> 0x1F) & (v1 >> 0x1F) & 0xBF800000
         | (((0x17 - v1) >> 0x1F)
          | ((int)0xFF800000 >> ((~((0x17 - v1) >> 0x1F) & 0x17) - ((0x17 - v1) & ~((0x17 - v1) >> 0x1F)))))
         & ~(v1 >> 0x1F)
         & (v2
          + ((v2 >> 0x1F)
           & ((int)&loc_800000 >> v1)
           & ~((v2
              & ~(((0x17 - v1) >> 0x1F)
                | ((int)0xFF800000 >> ((~((0x17 - v1) >> 0x1F) & 0x17) - ((0x17 - v1) & ~((0x17 - v1) >> 0x1F))))))
             - 1))));
}
