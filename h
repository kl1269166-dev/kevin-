<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Ficha Médica QR</title>
    <style>
        body{
            font-family: Arial;
            text-align: center;
            margin-top: 40px;
        }
        input{
            display: block;
            margin: 10px auto;
            padding: 10px;
            width: 250px;
        }
        button{
            padding: 10px 20px;
            cursor: pointer;
        }
    </style>
</head>
<body>

    <h1>Ficha Médica de Emergencia</h1>

    <input type="text" id="nombre" placeholder="Nombre completo">
    <input type="text" id="sangre" placeholder="Grupo sanguíneo">
    <input type="text" id="alergias" placeholder="Alergias">
    <input type="text" id="contacto" placeholder="Contacto de emergencia">

    <button onclick="generarQR()">Generar QR</button>

    <div id="qrcode" style="margin-top:20px;"></div>

    <script src="https://cdnjs.cloudflare.com/ajax/libs/qrcodejs/1.0.0/qrcode.min.js"></script>

    <script>
        function generarQR() {
            let datos =
                "Nombre: " + document.getElementById("nombre").value + "\n" +
                "Sangre: " + document.getElementById("sangre").value + "\n" +
                "Alergias: " + document.getElementById("alergias").value + "\n" +
                "Contacto: " + document.getElementById("contacto").value;

            document.getElementById("qrcode").innerHTML = "";

            new QRCode(document.getElementById("qrcode"), datos);
        }
    </script>

</body>
</html>