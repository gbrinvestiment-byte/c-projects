{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "shell",
            "label": "build calculadora",
            "command": "/usr/bin/clang",
            "args": [
                "-g",
                "calculadora.c",
                "-o",
                "calculadora"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": [
                "$gcc"
            ]
        }
    ]
}