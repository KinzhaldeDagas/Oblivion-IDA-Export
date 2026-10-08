void __cdecl sub_A24A40()
{
  g_TileUserTraitTable.vtable = &NiTArray<Tile::StringListElement *>::`vftable'; /*0xa24a46*/
  FormHeapFree((unsigned int)g_TileUserTraitTable.data); /*0xa24a50*/
}
