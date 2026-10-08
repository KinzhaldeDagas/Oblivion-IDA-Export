0x783080: push    ecx; MoonSugarEffect decode: NiD3DVertexShader vtable +0x5C validity/restore thunk over sub_77EB10. Works only for wrappers with a creator pointer or an already-live +0x30 handle.
0x783081: call    NiD3DVertexShader__EnsureDeviceObject; Ensures a vertex-shader device object exists. A live handle succeeds immediately; otherwise the retained program creator is asked to rebuild/restore it.
0x783086: pop     ecx
0x783087: retn
