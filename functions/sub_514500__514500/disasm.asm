0x514500: push    0FFFFFFFFh
0x514502: push    offset SEH_616530
0x514507: mov     eax, large fs:0
0x51450D: push    eax
0x51450E: sub     esp, 18h
0x514511: push    esi
0x514512: mov     eax, ds:0B30AACh
0x514517: xor     eax, esp
0x514519: push    eax
0x51451A: lea     eax, [esp+2Ch+var_C]
0x51451E: mov     large fs:0, eax
0x514524: mov     edx, [esp+2Ch+l]
0x514528: fld     dword ptr ds:0B430A4h
0x51452E: lea     eax, [esp+2Ch+var_24]
0x514532: fstp    [esp+2Ch+var_24]
0x514536: fld     dword ptr ds:0B430A8h
0x51453C: push    eax
0x51453D: mov     eax, [esp+30h+arg_10]
0x514541: fstp    dword ptr [esp+30h+var_20]
0x514545: lea     ecx, [esp+30h+var_20]
0x514549: push    ecx; UInt16
0x51454A: mov     ecx, [esp+34h+arg_C]
0x51454E: push    edx; l
0x51454F: mov     edx, [esp+38h+a4]
0x514553: push    eax; a6
0x514554: mov     eax, [esp+3Ch+a3]
0x514558: push    ecx; a5
0x514559: mov     ecx, [esp+40h+arg_4]
0x51455D: push    edx; a4
0x51455E: mov     edx, [esp+44h+a1]
0x514562: push    eax; a3
0x514563: push    ecx; a2
0x514564: push    edx; a1
0x514565: call    Script_ExtractArgs
0x51456A: add     esp, 24h
0x51456D: test    al, al
0x51456F: jnz     short loc_514582
0x514571: mov     ecx, [esp+2Ch+var_C]
0x514575: mov     large fs:0, ecx
0x51457C: pop     ecx
0x51457D: pop     esi
0x51457E: add     esp, 24h
0x514581: retn
0x514582: fld     dword ptr ds:0B430A4h
0x514588: xor     esi, esi
0x51458A: fstp    [esp+2Ch+var_1C]
0x51458E: mov     [esp+2Ch+a2], esi
0x514592: fld     dword ptr ds:0B430A8h
0x514598: mov     word ptr [esp+2Ch+var_10], si
0x51459D: fstp    [esp+2Ch+var_18]
0x5145A1: mov     word ptr [esp+2Ch+var_10+2], si
0x5145A6: fld     [esp+2Ch+var_1C]
0x5145AA: sub     esp, 10h
0x5145AD: fstp    [esp+3Ch+var_34]
0x5145B1: lea     eax, [esp+3Ch+a2]
0x5145B5: fld     [esp+3Ch+var_18]
0x5145B9: mov     [esp+3Ch+var_4], esi
0x5145BD: fstp    qword ptr [esp+3Ch+ArgList]; ArgList
0x5145C0: push    offset aOldValuesLocal; "Old values:   [ Local Trees: %f | LOD T"...
0x5145C5: push    eax; int
0x5145C6: call    BSStringT_Static_Format
0x5145CB: mov     edx, [esp+44h+a2]
0x5145CF: add     esp, 10h
0x5145D2: mov     ecx, esp; this
0x5145D4: mov     [esp+34h+var_18], esp
0x5145D8: push    esi; a3
0x5145D9: push    edx; a2
0x5145DA: mov     [ecx], esi
0x5145DC: mov     [ecx+4], si
0x5145E0: mov     [ecx+6], si
0x5145E4: call    BSStringT_Set
0x5145E9: call    sub_57C370
0x5145EE: fld     [esp+34h+var_24]
0x5145F2: fst     dword ptr ds:0B430A4h
0x5145F8: sub     esp, 8
0x5145FB: fld     dword ptr [esp+3Ch+var_20]
0x5145FF: lea     eax, [esp+3Ch+a2]
0x514603: fst     dword ptr ds:0B430A8h
0x514609: fxch    st(1)
0x51460B: fstp    [esp+3Ch+var_34]
0x51460F: fstp    qword ptr [esp+3Ch+ArgList]; ArgList
0x514612: push    offset aNewValuesLocal; "New values:   [ Local Trees: %f | LOD T"...
0x514617: push    eax; int
0x514618: call    BSStringT_Static_Format
0x51461D: add     esp, 10h
0x514620: mov     ecx, esp; this
0x514622: mov     [esp+34h+var_18], esp
0x514626: push    esi; a3
0x514627: mov     [ecx], esi
0x514629: mov     [ecx+4], si
0x51462D: mov     [ecx+6], si
0x514631: mov     esi, [esp+38h+a2]
0x514635: push    esi; a2
0x514636: call    BSStringT_Set
0x51463B: call    sub_57C370
0x514640: push    esi
0x514641: call    FormHeapFree
0x514646: add     esp, 0Ch
0x514649: mov     al, 1
0x51464B: mov     ecx, [esp+2Ch+var_C]
0x51464F: mov     large fs:0, ecx
0x514656: pop     ecx
0x514657: pop     esi
0x514658: add     esp, 24h
0x51465B: retn
