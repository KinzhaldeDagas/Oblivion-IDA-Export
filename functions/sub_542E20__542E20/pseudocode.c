Sky *__cdecl sub_542E20(Ni2DBuffer *a2)
{
  Sky *result; // eax

  result = g_Sky;
  if ( g_Sky )
  {
    if ( result->clouds )
      return (Sky *)NiSmartPointer_Set__((Ni2DBuffer **)&result->clouds->unk10, a2);
  }
  return result;
}
