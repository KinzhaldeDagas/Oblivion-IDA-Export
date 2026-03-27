0x7D5E16: push    0; jumptable 007D5B69 default case
0x7D5E18: lea     ecx, [esp+4+arg_3C]; this
0x7D5E1C: call    ??0BSCubeMapCamera@@QAE@XZ; BSCubeMapCamera::BSCubeMapCamera(void)
0x7D5E21: mov     ecx, [esp+arg_1A0]
0x7D5E28: mov     eax, [esp+arg_19C]
0x7D5E2F: mov     edx, [esp+arg_1A4]
0x7D5E36: mov     [esp+arg_3C.members.m_localTransform.pos.y], ecx
0x7D5E3D: push    esi
0x7D5E3E: lea     ecx, [esp+4+arg_3C]
0x7D5E42: mov     [esp+4+arg_194], 0
0x7D5E4D: mov     [esp+4+arg_3C.members.m_localTransform.pos.x], eax
0x7D5E54: mov     [esp+4+arg_3C.members.m_localTransform.pos.z], edx
0x7D5E5B: call    sub_812EF0
0x7D5E60: fldz
0x7D5E62: push    1; a3
0x7D5E64: push    ecx
0x7D5E65: lea     ecx, [esp+8+arg_3C]; this
0x7D5E69: fstp    [esp+8+a2]; a2
0x7D5E6C: call    NiAVObject_UpdateNiAVObject
0x7D5E71: lea     eax, [esp+arg_3C]
0x7D5E75: push    eax
0x7D5E76: push    ebx
0x7D5E77: mov     ecx, edi
0x7D5E79: call    sub_7D34C0
0x7D5E7E: lea     ecx, [esp+arg_3C]; this
0x7D5E82: mov     bl, al
0x7D5E84: mov     [esp+arg_194], 0FFFFFFFFh
0x7D5E8F: call    ??1BSCubeMapCamera@@UAE@XZ; BSCubeMapCamera::~BSCubeMapCamera(void)
0x7D5E94: mov     al, bl
0x7D5E96: mov     ecx, [esp+arg_18C]
0x7D5E9D: mov     large fs:0, ecx
0x7D5EA4: pop     ecx
0x7D5EA5: pop     edi
0x7D5EA6: pop     esi
0x7D5EA7: pop     ebx
0x7D5EA8: add     esp, 18Ch
0x7D5EAE: retn    18h
