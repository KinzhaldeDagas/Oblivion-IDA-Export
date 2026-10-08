0x434850: mov     eax, [esp+arg_8]; Thin wrapper over ModelLoader_BuildFileListWildcard with archive lookup enabled. Power-attack/KF discovery uses this to enumerate candidate model paths.
0x434854: mov     ecx, [esp+arg_4]
0x434858: mov     edx, [esp+Str]
0x43485C: push    eax; int
0x43485D: push    1; int
0x43485F: push    ecx; char *
0x434860: push    edx; Str
0x434861: call    ModelLoader_BuildFileListWildcard; Decoded animation/model-loader helper. Builds a BSSimpleList of file paths for an input path that may contain wildcards; merges loose-file FindFirstFile results when archive invalidation is enabled, then asks archive/file systems to append matches. Used by KF/model discovery, not a CustomAnim override registry.
0x434866: add     esp, 10h
0x434869: retn    0Ch
