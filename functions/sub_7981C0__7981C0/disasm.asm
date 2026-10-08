0x7981C0: push    esi; SpeedTree decode: stock SLodGeometry ctor. Initializes embedded compact SLeaf-style output record through 0x786F30, clears dirty/valid flag at +0x3C and original-center pointer at +0x40.
0x7981C1: mov     esi, ecx
0x7981C3: call    OB_SLeafGeometryOutput_DefaultCtor_010201A0; Oblivion 1.2.0.416: initializes the compact 0x3C-byte leaf output record: active=false, scalar=-1.0f, discreteLodLevel=-1, leafCount=0, and all eleven pointer slots null. RT4.1 SGeometry::SLeaf corroborates the LOD/count/pointer roles but has a larger virtual layout and 1.0 rock/rustle scalars; Oblivion is authoritative.
0x7981C8: xor     eax, eax
0x7981CA: mov     [esi+3Ch], al
0x7981CD: mov     [esi+40h], eax
0x7981D0: mov     eax, esi
0x7981D2: pop     esi
0x7981D3: retn
