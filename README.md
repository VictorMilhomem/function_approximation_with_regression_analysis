# Function Approximation with regression analysis

### Linear Regression

Equation:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3Dax%2Bb)

a coeficient:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?a%26amp%3B%3D%5Cfrac%7B%5Csum%20x_i%20%5Csum%20y_i-%20n%5Csum%20x_iy_i%7D%7B%5Cleft%28%5Csum%20x_i%5Cright%29%5E2-n%5Csum%20x_i%5E2%7D)

b coeficient:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?b%26amp%3B%3D%5Cfrac%7B%5Csum%20x_i%20%5Csum%20x_iy_i-%5Csum%20x_i%5E2%5Csum%20y_i%7D%7B%5Cleft%28%5Csum%20x_i%5Cright%29%5E2-n%5Csum%20x_i%5E2%7D)

Linear correlation coefficient:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?r_%7Bxy%7D%26amp%3B%3D%5Cfrac%7Bn%5Csum%20x_iy_i-%5Csum%20x_i%5Csum%20y_i%7D%7B%5Csqrt%7B%5Cleft%28n%5Csum%20x_i%5E2-%5Cleft%28%5Csum%20x_i%5Cright%29%5E2%5Cright%29%5C%21%5C%21%5Cleft%28n%5Csum%20y_i%5E2-%5Cleft%28%5Csum%20y_i%5Cright%29%5E2%20%5Cright%29%7D%7D)

Determination coefficient:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?R%5E2%3Dr_%7Bxy%7D%5E2)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)

### Power Regression

Equation:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3Da%5Ccdot%20x%5Eb)

a coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?a%3D%5Cexp%5C%21%5Cleft%28%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cln%20y_i-%5Cdfrac%7Bb%7D%7Bn%7D%5Csum%5Cln%20x_i%5Cright%29)

b coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?b%3D%5Cdfrac%7Bn%5Csum%28%5Cln%20x_i%5Ccdot%5Cln%20y_i%29-%5Csum%5Cln%20x_i%5Ccdot%5Csum%5Cln%20y_i%20%7D%7Bn%5Csum%5Cln%5E2x_i-%5Cleft%28%5Csum%5Cln%20x_i%5Cright%29%5E2%20%7D)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)

### ab-Exponential Regression

Equation:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3Da%5Ccdot%20b%5Ex)

a coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?a%3D%5Cexp%5C%21%5Cleft%28%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cln%20y_i-%5Cdfrac%7B%5Cln%20b%7D%7Bn%7D%5Csum%20x_i%5Cright%29)

b coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?b%3D%5Cexp%5Cdfrac%7Bn%5Csum%20x_i%5Cln%20y_i-%5Csum%20x_i%5Ccdot%5Csum%5Cln%20y_i%20%7D%7Bn%5Csum%20x_i%5E2-%5Cleft%28%5Csum%20x_i%5Cright%29%5E2%20%7D)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)

### Hyperbolic Regression

Equation:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3Da%20%2B%20%5Cfrac%7Bb%7D%7Bx%7D)

a coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?a%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%20y_i-%5Cdfrac%7Bb%7D%7Bn%7D%5Csum%5Cdfrac%7B1%7D%7Bx_i%7D)

b coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?b%3D%5Cdfrac%7Bn%5Csum%5Cdfrac%7By_i%7D%7Bx_i%7D-%5Csum%5Cdfrac%7B1%7D%7Bx_i%7D%5Csum%20y_i%20%7D%7Bn%5Csum%5Cdfrac%7B1%7D%7Bx_i%5E2%7D-%5Cleft%28%5Csum%5Cdfrac%7B1%7D%7Bx_i%7D%5Cright%29%5E2%20%7D)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)

### Logarithmic Regression

Equation:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3Da%20%2B%20b%5Cln%20x)

a coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?a%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%20y_i-%5Cdfrac%7Bb%7D%7Bn%7D%5Csum%5Cln%20x_i)

b coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?b%3D%5Cdfrac%7Bn%5Csum%28y_i%5Cln%20x_i%29-%5Csum%5Cln%20x_i%5Ccdot%20%5Csum%20y_i%20%7D%7Bn%5Csum%5Cln%5E2x_i-%5Cleft%28%5Csum%5Cln%20x_i%5Cright%29%5E2%20%7D)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)

### Exponential Regression

Equation:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?%5Cwidehat%7By%7D%3De%5E%7Ba%2Bbx%7D)

a coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?a%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cln%20y_i-%5Cdfrac%7Bb%7D%7Bn%7D%5Csum%20x_i)

b coeficient:
![ALT](https://planetcalc.com/cgi-bin/mimetex.cgi?b%3D%5Cdfrac%7Bn%5Csum%20x_i%5Cln%20y_i-%5Csum%20x_i%5Ccdot%5Csum%5Cln%20y_i%20%7D%7Bn%5Csum%20x_i%5E2-%5Cleft%28%5Csum%20x_i%5Cright%29%5E2%20%7D)

Regression standard error:
![ALT](https://pt.planetcalc.com/cgi-bin/mimetex.cgi?%5Coverline%7BA%7D%3D%5Cdfrac%7B1%7D%7Bn%7D%5Csum%5Cleft%7C%5Cdfrac%7By_i-%5Cwidehat%7By%7D_i%7D%7By_i%7D%5Cright%7C%5Ccdot100%5C%25)
